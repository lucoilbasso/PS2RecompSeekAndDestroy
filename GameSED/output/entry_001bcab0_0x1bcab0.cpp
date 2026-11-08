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

// Function: entry_001bcab0
// Address: 0x1bcab0 - 0x1bcb08
void entry_001bcab0_0x1bcab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bcab0_0x1bcab0");
#endif

    switch (ctx->pc) {
        case 0x1bcab0u: goto label_1bcab0;
        case 0x1bcab4u: goto label_1bcab4;
        case 0x1bcab8u: goto label_1bcab8;
        case 0x1bcabcu: goto label_1bcabc;
        case 0x1bcac0u: goto label_1bcac0;
        case 0x1bcac4u: goto label_1bcac4;
        case 0x1bcac8u: goto label_1bcac8;
        case 0x1bcaccu: goto label_1bcacc;
        case 0x1bcad0u: goto label_1bcad0;
        case 0x1bcad4u: goto label_1bcad4;
        case 0x1bcad8u: goto label_1bcad8;
        case 0x1bcadcu: goto label_1bcadc;
        case 0x1bcae0u: goto label_1bcae0;
        case 0x1bcae4u: goto label_1bcae4;
        case 0x1bcae8u: goto label_1bcae8;
        case 0x1bcaecu: goto label_1bcaec;
        case 0x1bcaf0u: goto label_1bcaf0;
        case 0x1bcaf4u: goto label_1bcaf4;
        case 0x1bcaf8u: goto label_1bcaf8;
        case 0x1bcafcu: goto label_1bcafc;
        case 0x1bcb00u: goto label_1bcb00;
        case 0x1bcb04u: goto label_1bcb04;
        default: break;
    }

    ctx->pc = 0x1bcab0u;

label_1bcab0:
    // 0x1bcab0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bcab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bcab4:
    // 0x1bcab4: 0xc071074  jal         func_1C41D0
label_1bcab8:
    if (ctx->pc == 0x1BCAB8u) {
        ctx->pc = 0x1BCAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCAB4u;
        // 0x1bcab8: 0xafbe0080  sw          $fp, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCABCu;
        goto label_1bcabc;
    }
    ctx->pc = 0x1BCAB4u;
    SET_GPR_U32(ctx, 31, 0x1BCABCu);
    ctx->pc = 0x1BCAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCAB4u;
    // 0x1bcab8: 0xafbe0080  sw          $fp, 0x80($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C41D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C41D0u, 0x1BCAB4u, 0x1BCABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCABCu;
label_1bcabc:
    // 0x1bcabc: 0x8e450038  lw          $a1, 0x38($s2)
    ctx->pc = 0x1bcabcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_1bcac0:
    // 0x1bcac0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bcac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bcac4:
    // 0x1bcac4: 0xc071074  jal         func_1C41D0
label_1bcac8:
    if (ctx->pc == 0x1BCAC8u) {
        ctx->pc = 0x1BCAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCAC4u;
        // 0x1bcac8: 0xafa20084  sw          $v0, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCACCu;
        goto label_1bcacc;
    }
    ctx->pc = 0x1BCAC4u;
    SET_GPR_U32(ctx, 31, 0x1BCACCu);
    ctx->pc = 0x1BCAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCAC4u;
    // 0x1bcac8: 0xafa20084  sw          $v0, 0x84($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C41D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C41D0u, 0x1BCAC4u, 0x1BCACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCACCu;
label_1bcacc:
    // 0x1bcacc: 0xde430028  ld          $v1, 0x28($s2)
    ctx->pc = 0x1bcaccu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 40)));
label_1bcad0:
    // 0x1bcad0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1bcad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1bcad4:
    // 0x1bcad4: 0x8e48003c  lw          $t0, 0x3C($s2)
    ctx->pc = 0x1bcad4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_1bcad8:
    // 0x1bcad8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1bcad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1bcadc:
    // 0x1bcadc: 0xffa30090  sd          $v1, 0x90($sp)
    ctx->pc = 0x1bcadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 3));
label_1bcae0:
    // 0x1bcae0: 0xde430030  ld          $v1, 0x30($s2)
    ctx->pc = 0x1bcae0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 48)));
label_1bcae4:
    // 0x1bcae4: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x1bcae4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1bcae8:
    // 0x1bcae8: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x1bcae8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1bcaec:
    // 0x1bcaec: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x1bcaecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
label_1bcaf0:
    // 0x1bcaf0: 0xafa8008c  sw          $t0, 0x8C($sp)
    ctx->pc = 0x1bcaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 8));
label_1bcaf4:
    // 0x1bcaf4: 0xe0f809  jalr        $a3
label_1bcaf8:
    if (ctx->pc == 0x1BCAF8u) {
        ctx->pc = 0x1BCAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCAF4u;
        // 0x1bcaf8: 0xffa30098  sd          $v1, 0x98($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCAFCu;
        goto label_1bcafc;
    }
    ctx->pc = 0x1BCAF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x1BCAFCu);
        ctx->pc = 0x1BCAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCAF4u;
        // 0x1bcaf8: 0xffa30098  sd          $v1, 0x98($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCAF4u, 0x1BCAFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BCAFCu;
label_1bcafc:
    // 0x1bcafc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1bcafcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bcb00:
    // 0x1bcb00: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1bcb04:
    if (ctx->pc == 0x1BCB04u) {
        ctx->pc = 0x1BCB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB00u;
        // 0x1bcb04: 0x8e840048  lw          $a0, 0x48($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCB08u;
        goto label_fallthrough_0x1bcb00;
    }
    ctx->pc = 0x1BCB00u;
    {
        const bool branch_taken_0x1bcb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB00u;
        // 0x1bcb04: 0x8e840048  lw          $a0, 0x48($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcb00) {
            ctx->pc = 0x1BCB70u;
            return;
        }
    }
label_fallthrough_0x1bcb00:
    ctx->pc = 0x1BCB08u;
}
