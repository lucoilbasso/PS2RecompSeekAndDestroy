#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_00161aac
// Address: 0x161aac - 0x161ac8
void entry_00161aac_0x161aac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161aac_0x161aac");
#endif

    ctx->pc = 0x161aacu;

    // 0x161aac: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x161aacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x161ab0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x161AB0u;
    {
        const bool branch_taken_0x161ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161AB0u;
        // 0x161ab4: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161ab0) {
            ctx->pc = 0x161AC8u;
            return;
        }
    }
    ctx->pc = 0x161AB8u;
    // 0x161ab8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x161ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x161abc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x161abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x161ac0: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x161ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161ac4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x161ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->pc = 0x161ac8u;
}
