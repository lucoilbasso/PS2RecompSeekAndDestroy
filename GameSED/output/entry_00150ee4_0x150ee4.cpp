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

// Function: entry_00150ee4
// Address: 0x150ee4 - 0x150f00
void entry_00150ee4_0x150ee4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150ee4_0x150ee4");
#endif

    ctx->pc = 0x150ee4u;

    // 0x150ee4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x150ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x150ee8: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x150ee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x150eec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x150eecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150ef0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x150EF0u;
    {
        const bool branch_taken_0x150ef0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x150EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150EF0u;
        // 0x150ef4: 0x8e050690  lw          $a1, 0x690($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150ef0) {
            ctx->pc = 0x150F00u;
            return;
        }
    }
    ctx->pc = 0x150EF8u;
    // 0x150ef8: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x150ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
    // 0x150efc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x150efcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    ctx->pc = 0x150f00u;
}
