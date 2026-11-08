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

// Function: entry_00171b00
// Address: 0x171b00 - 0x171bd8
void entry_00171b00_0x171b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171b00_0x171b00");
#endif

    switch (ctx->pc) {
        case 0x171b24u: goto label_171b24;
        case 0x171b48u: goto label_171b48;
        case 0x171b78u: goto label_171b78;
        case 0x171bd0u: goto label_171bd0;
        default: break;
    }

    ctx->pc = 0x171b00u;

label_171b00:
    // 0x171b00: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x171b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x171b04: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x171b04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x171b08: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x171b08u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x171b0c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x171b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x171b10: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x171b10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x171b14: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x171b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x171b18: 0xd33021  addu        $a2, $a2, $s3
    ctx->pc = 0x171b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x171b1c: 0xc05ce74  jal         func_1739D0
    ctx->pc = 0x171B1Cu;
    SET_GPR_U32(ctx, 31, 0x171B24u);
    ctx->pc = 0x171B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171B1Cu;
    // 0x171b20: 0x8e280004  lw          $t0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1739D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1739D0u, 0x171B1Cu, 0x171B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171B24u;
label_171b24:
    // 0x171b24: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x171b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x171b28: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x171b28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x171b2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x171b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171b30: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x171b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x171b34: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x171b34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x171b38: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x171b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x171b3c: 0xd33021  addu        $a2, $a2, $s3
    ctx->pc = 0x171b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x171b40: 0xc05ce74  jal         func_1739D0
    ctx->pc = 0x171B40u;
    SET_GPR_U32(ctx, 31, 0x171B48u);
    ctx->pc = 0x171B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171B40u;
    // 0x171b44: 0x8e280004  lw          $t0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1739D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1739D0u, 0x171B40u, 0x171B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171B48u;
label_171b48:
    // 0x171b48: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x171b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x171b4c: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x171b4cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x171b50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x171b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x171b54: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x171b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x171b58: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x171b58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x171b5c: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x171b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x171b60: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x171b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x171b64: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x171b64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x171b68: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x171b68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x171b6c: 0xd33021  addu        $a2, $a2, $s3
    ctx->pc = 0x171b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x171b70: 0xc05ce74  jal         func_1739D0
    ctx->pc = 0x171B70u;
    SET_GPR_U32(ctx, 31, 0x171B78u);
    ctx->pc = 0x171B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171B70u;
    // 0x171b74: 0x84043  sra         $t0, $t0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1739D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1739D0u, 0x171B70u, 0x171B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171B78u;
label_171b78:
    // 0x171b78: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x171b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x171b7c: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x171b7cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x171b80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x171b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x171b84: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x171b84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x171b88: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x171b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x171b8c: 0x817c2  srl         $v0, $t0, 31
    ctx->pc = 0x171b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x171b90: 0x8e090000  lw          $t1, 0x0($s0)
    ctx->pc = 0x171b90u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x171b94: 0xe83018  mult        $a2, $a3, $t0
    ctx->pc = 0x171b94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x171b98: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x171b98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x171b9c: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x171b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x171ba0: 0x1334821  addu        $t1, $t1, $s3
    ctx->pc = 0x171ba0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 19)));
    // 0x171ba4: 0x84043  sra         $t0, $t0, 1
    ctx->pc = 0x171ba4u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 1));
    // 0x171ba8: 0x26520044  addiu       $s2, $s2, 0x44
    ctx->pc = 0x171ba8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
    // 0x171bac: 0x3c010007  lui         $at, 0x7
    ctx->pc = 0x171bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)7 << 16));
    // 0x171bb0: 0x34210800  ori         $at, $at, 0x800
    ctx->pc = 0x171bb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2048);
    // 0x171bb4: 0x339821  addu        $s3, $at, $s3
    ctx->pc = 0x171bb4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 19)));
    // 0x171bb8: 0x24c301ff  addiu       $v1, $a2, 0x1FF
    ctx->pc = 0x171bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 511));
    // 0x171bbc: 0x28c20000  slti        $v0, $a2, 0x0
    ctx->pc = 0x171bbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x171bc0: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x171bc0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x171bc4: 0x63243  sra         $a2, $a2, 9
    ctx->pc = 0x171bc4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 9));
    // 0x171bc8: 0xc05ce74  jal         func_1739D0
    ctx->pc = 0x171BC8u;
    SET_GPR_U32(ctx, 31, 0x171BD0u);
    ctx->pc = 0x171BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171BC8u;
    // 0x171bcc: 0x1263021  addu        $a2, $t1, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1739D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1739D0u, 0x171BC8u, 0x171BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171BD0u;
label_171bd0:
    // 0x171bd0: 0x683ffcb  bgezl       $s4, . + 4 + (-0x35 << 2)
    ctx->pc = 0x171BD0u;
    {
        const bool branch_taken_0x171bd0 = (GPR_S32(ctx, 20) >= 0);
        if (branch_taken_0x171bd0) {
            ctx->pc = 0x171BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171BD0u;
            // 0x171bd4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171b00;
        }
    }
    ctx->pc = 0x171BD8u;
}
