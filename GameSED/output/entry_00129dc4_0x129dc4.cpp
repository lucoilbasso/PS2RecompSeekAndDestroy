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

// Function: entry_00129dc4
// Address: 0x129dc4 - 0x129e20
void entry_00129dc4_0x129dc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129dc4_0x129dc4");
#endif

    switch (ctx->pc) {
        case 0x129de0u: goto label_129de0;
        case 0x129e10u: goto label_129e10;
        case 0x129e18u: goto label_129e18;
        default: break;
    }

    ctx->pc = 0x129dc4u;

    // 0x129dc4: 0x14c00022  bnez        $a2, . + 4 + (0x22 << 2)
    ctx->pc = 0x129DC4u;
    {
        const bool branch_taken_0x129dc4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x129DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129DC4u;
        // 0x129dc8: 0x8fb000c8  lw          $s0, 0xC8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129dc4) {
            ctx->pc = 0x129E50u;
            return;
        }
    }
    ctx->pc = 0x129DCCu;
    // 0x129dcc: 0x8ea20094  lw          $v0, 0x94($s5)
    ctx->pc = 0x129dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 148)));
    // 0x129dd0: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x129DD0u;
    {
        const bool branch_taken_0x129dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129DD0u;
        // 0x129dd4: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129dd0) {
            ctx->pc = 0x129E20u;
            return;
        }
    }
    ctx->pc = 0x129DD8u;
    // 0x129dd8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x129DD8u;
    SET_GPR_U32(ctx, 31, 0x129DE0u);
    ctx->pc = 0x129DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129DD8u;
    // 0x129ddc: 0x8ea40088  lw          $a0, 0x88($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x129DD8u, 0x129DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129DE0u;
label_129de0:
    // 0x129de0: 0x8ea3008c  lw          $v1, 0x8C($s5)
    ctx->pc = 0x129de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 140)));
    // 0x129de4: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x129de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x129de8: 0x8ea50080  lw          $a1, 0x80($s5)
    ctx->pc = 0x129de8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
    // 0x129dec: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x129decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x129df0: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x129df0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x129df4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x129df4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x129df8: 0x8ea40088  lw          $a0, 0x88($s5)
    ctx->pc = 0x129df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
    // 0x129dfc: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x129dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x129e00: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x129e00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x129e04: 0xaea50080  sw          $a1, 0x80($s5)
    ctx->pc = 0x129e04u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 128), GPR_U32(ctx, 5));
    // 0x129e08: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x129E08u;
    SET_GPR_U32(ctx, 31, 0x129E10u);
    ctx->pc = 0x129E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129E08u;
    // 0x129e0c: 0xaea6008c  sw          $a2, 0x8C($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 140), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x129E08u, 0x129E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129E10u;
label_129e10:
    // 0x129e10: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x129E10u;
    SET_GPR_U32(ctx, 31, 0x129E18u);
    ctx->pc = 0x129E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129E10u;
    // 0x129e14: 0x8ea40084  lw          $a0, 0x84($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x129E10u, 0x129E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129E18u;
label_129e18:
    // 0x129e18: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x129E18u;
    {
        const bool branch_taken_0x129e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129E18u;
        // 0x129e1c: 0xdfb00150  ld          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129e18) {
            ctx->pc = 0x129F3Cu;
            return;
        }
    }
    ctx->pc = 0x129E20u;
}
