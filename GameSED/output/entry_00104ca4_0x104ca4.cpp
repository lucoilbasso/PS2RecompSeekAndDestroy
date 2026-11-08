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

// Function: entry_00104ca4
// Address: 0x104ca4 - 0x104cf0
void entry_00104ca4_0x104ca4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104ca4_0x104ca4");
#endif

    switch (ctx->pc) {
        case 0x104cd8u: goto label_104cd8;
        case 0x104cecu: goto label_104cec;
        default: break;
    }

    ctx->pc = 0x104ca4u;

    // 0x104ca4: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x104ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x104ca8: 0x2e630020  sltiu       $v1, $s3, 0x20
    ctx->pc = 0x104ca8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x104cac: 0x3c110026  lui         $s1, 0x26
    ctx->pc = 0x104cacu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)38 << 16));
    // 0x104cb0: 0x2631ef80  addiu       $s1, $s1, -0x1080
    ctx->pc = 0x104cb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963072));
    // 0x104cb4: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x104cb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x104cb8: 0x5460000d  bnel        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x104CB8u;
    {
        const bool branch_taken_0x104cb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x104cb8) {
            ctx->pc = 0x104CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104CB8u;
            // 0x104cbc: 0xae35000c  sw          $s5, 0xC($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104CF0u;
            return;
        }
    }
    ctx->pc = 0x104CC0u;
    // 0x104cc0: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x104cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x104cc4: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x104cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x104cc8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x104cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104ccc: 0x24843818  addiu       $a0, $a0, 0x3818
    ctx->pc = 0x104cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14360));
    // 0x104cd0: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x104CD0u;
    SET_GPR_U32(ctx, 31, 0x104CD8u);
    ctx->pc = 0x104CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104CD0u;
    // 0x104cd4: 0x8c50038c  lw          $s0, 0x38C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 908)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x104CD0u, 0x104CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104CD8u;
label_104cd8:
    // 0x104cd8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x104cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x104cdc: 0x2406003d  addiu       $a2, $zero, 0x3D
    ctx->pc = 0x104cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x104ce0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x104ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104ce4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x104CE4u;
    SET_GPR_U32(ctx, 31, 0x104CECu);
    ctx->pc = 0x104CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104CE4u;
    // 0x104ce8: 0x24a53890  addiu       $a1, $a1, 0x3890 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x104CE4u, 0x104CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104CECu;
label_104cec:
    // 0x104cec: 0xae35000c  sw          $s5, 0xC($s1)
    ctx->pc = 0x104cecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 21));
    ctx->pc = 0x104cf0u;
}
