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

// Function: copy2area
// Address: 0x170b60 - 0x170c8c
void copy2area_0x170b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("copy2area_0x170b60");
#endif

    switch (ctx->pc) {
        case 0x170bd4u: goto label_170bd4;
        case 0x170be4u: goto label_170be4;
        case 0x170bf8u: goto label_170bf8;
        case 0x170c14u: goto label_170c14;
        case 0x170c24u: goto label_170c24;
        case 0x170c38u: goto label_170c38;
        case 0x170c48u: goto label_170c48;
        case 0x170c58u: goto label_170c58;
        default: break;
    }

    ctx->pc = 0x170b60u;

    // 0x170b60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x170b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x170b64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x170b64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170b68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x170b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x170b6c: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x170b6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170b70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x170b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x170b74: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x170b74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170b78: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x170b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x170b7c: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x170b7cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170b80: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x170b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x170b84: 0x215f021  addu        $fp, $s0, $s5
    ctx->pc = 0x170b84u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x170b88: 0x2273821  addu        $a3, $s1, $a3
    ctx->pc = 0x170b88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x170b8c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x170b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x170b90: 0xfe382a  slt         $a3, $a3, $fp
    ctx->pc = 0x170b90u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x170b94: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x170b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x170b98: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x170b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x170b9c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x170b9cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170ba0: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x170ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x170ba4: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x170ba4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170ba8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x170ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x170bac: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x170bacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x170bb0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x170bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x170bb4: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x170bb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170bb8: 0x14e00028  bnez        $a3, . + 4 + (0x28 << 2)
    ctx->pc = 0x170BB8u;
    {
        const bool branch_taken_0x170bb8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x170BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170BB8u;
        // 0x170bbc: 0x140a02d  daddu       $s4, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170bb8) {
            ctx->pc = 0x170C5Cu;
            goto label_170c5c;
        }
    }
    ctx->pc = 0x170BC0u;
    // 0x170bc0: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x170BC0u;
    {
        const bool branch_taken_0x170bc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x170bc0) {
            ctx->pc = 0x170BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x170BC0u;
            // 0x170bc4: 0x2309823  subu        $s3, $s1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x170C00u;
            goto label_170c00;
        }
    }
    ctx->pc = 0x170BC8u;
    // 0x170bc8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x170bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170bcc: 0xc074009  jal         func_1D0024
    ctx->pc = 0x170BCCu;
    SET_GPR_U32(ctx, 31, 0x170BD4u);
    ctx->pc = 0x170BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170BCCu;
    // 0x170bd0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0024u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0024u, 0x170BCCu, 0x170BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170BD4u;
label_170bd4:
    // 0x170bd4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x170bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170bd8: 0x2512821  addu        $a1, $s2, $s1
    ctx->pc = 0x170bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x170bdc: 0xc074009  jal         func_1D0024
    ctx->pc = 0x170BDCu;
    SET_GPR_U32(ctx, 31, 0x170BE4u);
    ctx->pc = 0x170BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170BDCu;
    // 0x170be0: 0x2113023  subu        $a2, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0024u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0024u, 0x170BDCu, 0x170BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170BE4u;
label_170be4:
    // 0x170be4: 0x2d02021  addu        $a0, $s6, $s0
    ctx->pc = 0x170be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x170be8: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x170be8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x170bec: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x170becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170bf0: 0xc074009  jal         func_1D0024
    ctx->pc = 0x170BF0u;
    SET_GPR_U32(ctx, 31, 0x170BF8u);
    ctx->pc = 0x170BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170BF0u;
    // 0x170bf4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0024u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0024u, 0x170BF0u, 0x170BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170BF8u;
label_170bf8:
    // 0x170bf8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x170BF8u;
    {
        const bool branch_taken_0x170bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170BF8u;
        // 0x170bfc: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170bf8) {
            ctx->pc = 0x170C5Cu;
            goto label_170c5c;
        }
    }
    ctx->pc = 0x170C00u;
label_170c00:
    // 0x170c00: 0x2b3102a  slt         $v0, $s5, $s3
    ctx->pc = 0x170c00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x170c04: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x170C04u;
    {
        const bool branch_taken_0x170c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170C04u;
        // 0x170c08: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170c04) {
            ctx->pc = 0x170C40u;
            goto label_170c40;
        }
    }
    ctx->pc = 0x170C0Cu;
    // 0x170c0c: 0xc074009  jal         func_1D0024
    ctx->pc = 0x170C0Cu;
    SET_GPR_U32(ctx, 31, 0x170C14u);
    ctx->pc = 0x170C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170C0Cu;
    // 0x170c10: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0024u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0024u, 0x170C0Cu, 0x170C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170C14u;
label_170c14:
    // 0x170c14: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x170c14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170c18: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x170c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170c1c: 0xc074009  jal         func_1D0024
    ctx->pc = 0x170C1Cu;
    SET_GPR_U32(ctx, 31, 0x170C24u);
    ctx->pc = 0x170C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170C1Cu;
    // 0x170c20: 0x2f02021  addu        $a0, $s7, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0024u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0024u, 0x170C1Cu, 0x170C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170C24u;
label_170c24:
    // 0x170c24: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x170c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x170c28: 0xb02823  subu        $a1, $a1, $s0
    ctx->pc = 0x170c28u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x170c2c: 0x2b33023  subu        $a2, $s5, $s3
    ctx->pc = 0x170c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x170c30: 0xc074009  jal         func_1D0024
    ctx->pc = 0x170C30u;
    SET_GPR_U32(ctx, 31, 0x170C38u);
    ctx->pc = 0x170C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170C30u;
    // 0x170c34: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0024u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0024u, 0x170C30u, 0x170C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170C38u;
label_170c38:
    // 0x170c38: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x170C38u;
    {
        const bool branch_taken_0x170c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170C38u;
        // 0x170c3c: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170c38) {
            ctx->pc = 0x170C5Cu;
            goto label_170c5c;
        }
    }
    ctx->pc = 0x170C40u;
label_170c40:
    // 0x170c40: 0xc074009  jal         func_1D0024
    ctx->pc = 0x170C40u;
    SET_GPR_U32(ctx, 31, 0x170C48u);
    ctx->pc = 0x170C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170C40u;
    // 0x170c44: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0024u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0024u, 0x170C40u, 0x170C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170C48u;
label_170c48:
    // 0x170c48: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x170c48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170c4c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x170c4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170c50: 0xc074009  jal         func_1D0024
    ctx->pc = 0x170C50u;
    SET_GPR_U32(ctx, 31, 0x170C58u);
    ctx->pc = 0x170C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170C50u;
    // 0x170c54: 0x2f02021  addu        $a0, $s7, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0024u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0024u, 0x170C50u, 0x170C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170C58u;
label_170c58:
    // 0x170c58: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x170c58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_170c5c:
    // 0x170c5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x170c5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170c60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x170c60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x170c64: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x170c64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170c68: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x170c68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x170c6c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x170c6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x170c70: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x170c70u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x170c74: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x170c74u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x170c78: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x170c78u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x170c7c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x170c7cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x170c80: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x170c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x170c84: 0x3e00008  jr          $ra
    ctx->pc = 0x170C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170C84u;
        // 0x170c88: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170C84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170C8Cu;
}
