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

// Function: entry_00121a9c
// Address: 0x121a9c - 0x121ab8
void entry_00121a9c_0x121a9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121a9c_0x121a9c");
#endif

    ctx->pc = 0x121a9cu;

    // 0x121a9c: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x121a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x121aa0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x121aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x121aa4: 0x3c012022  lui         $at, 0x2022
    ctx->pc = 0x121aa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8226 << 16));
    // 0x121aa8: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x121aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x121aac: 0xc420f640  lwc1        $f0, -0x9C0($at)
    ctx->pc = 0x121aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294964800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x121ab0: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x121AB0u;
    {
        const bool branch_taken_0x121ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121AB0u;
        // 0x121ab4: 0xe6000124  swc1        $f0, 0x124($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x121ab0) {
            ctx->pc = 0x121B9Cu;
            return;
        }
    }
    ctx->pc = 0x121AB8u;
}
