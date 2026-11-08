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

// Function: entry_0010e03c
// Address: 0x10e03c - 0x10e0a0
void entry_0010e03c_0x10e03c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e03c_0x10e03c");
#endif

    switch (ctx->pc) {
        case 0x10e078u: goto label_10e078;
        case 0x10e098u: goto label_10e098;
        default: break;
    }

    ctx->pc = 0x10e03cu;

    // 0x10e03c: 0x12a00068  beqz        $s5, . + 4 + (0x68 << 2)
    ctx->pc = 0x10E03Cu;
    {
        const bool branch_taken_0x10e03c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E03Cu;
        // 0x10e040: 0x260a82d  daddu       $s5, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e03c) {
            ctx->pc = 0x10E1E0u;
            return;
        }
    }
    ctx->pc = 0x10E044u;
    // 0x10e044: 0x8e0201c0  lw          $v0, 0x1C0($s0)
    ctx->pc = 0x10e044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x10e048: 0x261201b4  addiu       $s2, $s0, 0x1B4
    ctx->pc = 0x10e048u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    // 0x10e04c: 0x8e510008  lw          $s1, 0x8($s2)
    ctx->pc = 0x10e04cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x10e050: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10e050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10e054: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x10e054u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e058: 0xae0201c0  sw          $v0, 0x1C0($s0)
    ctx->pc = 0x10e058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 2));
    // 0x10e05c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x10e05cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e060: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x10e060u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e064: 0x16200025  bnez        $s1, . + 4 + (0x25 << 2)
    ctx->pc = 0x10E064u;
    {
        const bool branch_taken_0x10e064 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E064u;
        // 0x10e068: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e064) {
            ctx->pc = 0x10E0FCu;
            return;
        }
    }
    ctx->pc = 0x10E06Cu;
    // 0x10e06c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x10e06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10e070: 0xc068086  jal         func_1A0218
    ctx->pc = 0x10E070u;
    SET_GPR_U32(ctx, 31, 0x10E078u);
    ctx->pc = 0x10E074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E070u;
    // 0x10e074: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x10E070u, 0x10E078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E078u;
label_10e078:
    // 0x10e078: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x10e078u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e07c: 0x54e00008  bnel        $a3, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x10E07Cu;
    {
        const bool branch_taken_0x10e07c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e07c) {
            ctx->pc = 0x10E080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E07Cu;
            // 0x10e080: 0xace003f0  sw          $zero, 0x3F0($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 1008), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E0A0u;
            return;
        }
    }
    ctx->pc = 0x10E084u;
    // 0x10e084: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10e084u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x10e088: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10e088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e08c: 0x24a53d00  addiu       $a1, $a1, 0x3D00
    ctx->pc = 0x10e08cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15616));
    // 0x10e090: 0xc068186  jal         func_1A0618
    ctx->pc = 0x10E090u;
    SET_GPR_U32(ctx, 31, 0x10E098u);
    ctx->pc = 0x10E094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E090u;
    // 0x10e094: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x10E090u, 0x10E098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E098u;
label_10e098:
    // 0x10e098: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x10E098u;
    {
        const bool branch_taken_0x10e098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E098u;
        // 0x10e09c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e098) {
            ctx->pc = 0x10E0F8u;
            return;
        }
    }
    ctx->pc = 0x10E0A0u;
}
