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

// Function: LibraryGetEntryPtr__9ApcSCDEntii
// Address: 0x105a08 - 0x105a70
void LibraryGetEntryPtr__9ApcSCDEntii_0x105a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LibraryGetEntryPtr__9ApcSCDEntii_0x105a08");
#endif

    switch (ctx->pc) {
        case 0x105a4cu: goto label_105a4c;
        default: break;
    }

    ctx->pc = 0x105a08u;

    // 0x105a08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x105a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x105a0c: 0x53880  sll         $a3, $a1, 2
    ctx->pc = 0x105a0cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x105a10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x105a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x105a14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x105a14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105a18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x105a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x105a1c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x105a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x105a20: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x105a20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105a24: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x105a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x105a28: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x105a28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x105a2c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x105a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x105a30: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x105a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x105a34: 0xa3282a  slt         $a1, $a1, $v1
    ctx->pc = 0x105a34u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x105a38: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x105A38u;
    {
        const bool branch_taken_0x105a38 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x105A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105A38u;
        // 0x105a3c: 0x478821  addu        $s1, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105a38) {
            ctx->pc = 0x105A4Cu;
            goto label_105a4c;
        }
    }
    ctx->pc = 0x105A40u;
    // 0x105a40: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x105a40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x105a44: 0xc068186  jal         func_1A0618
    ctx->pc = 0x105A44u;
    SET_GPR_U32(ctx, 31, 0x105A4Cu);
    ctx->pc = 0x105A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105A44u;
    // 0x105a48: 0x24a53858  addiu       $a1, $a1, 0x3858 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x105A44u, 0x105A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105A4Cu;
label_105a4c:
    // 0x105a4c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x105a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x105a50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105a54: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x105a54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105a58: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x105a58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105a5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x105a5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105a60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x105a60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x105a64: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x105a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x105a68: 0x806a19a  j           func_1A8668
    ctx->pc = 0x105A68u;
    ctx->pc = 0x105A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105A68u;
    // 0x105a6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8668u;
    BSCDEntInqEntryPtr__FP5BcObjPUii_0x1a8668(rdram, ctx, runtime); return;
    ctx->pc = 0x105A70u;
}
