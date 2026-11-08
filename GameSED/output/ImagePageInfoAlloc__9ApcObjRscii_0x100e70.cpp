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

// Function: ImagePageInfoAlloc__9ApcObjRscii
// Address: 0x100e70 - 0x100f7c
void ImagePageInfoAlloc__9ApcObjRscii_0x100e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ImagePageInfoAlloc__9ApcObjRscii_0x100e70");
#endif

    switch (ctx->pc) {
        case 0x100e70u: goto label_100e70;
        case 0x100e74u: goto label_100e74;
        case 0x100e78u: goto label_100e78;
        case 0x100e7cu: goto label_100e7c;
        case 0x100e80u: goto label_100e80;
        case 0x100e84u: goto label_100e84;
        case 0x100e88u: goto label_100e88;
        case 0x100e8cu: goto label_100e8c;
        case 0x100e90u: goto label_100e90;
        case 0x100e94u: goto label_100e94;
        case 0x100e98u: goto label_100e98;
        case 0x100e9cu: goto label_100e9c;
        case 0x100ea0u: goto label_100ea0;
        case 0x100ea4u: goto label_100ea4;
        case 0x100ea8u: goto label_100ea8;
        case 0x100eacu: goto label_100eac;
        case 0x100eb0u: goto label_100eb0;
        case 0x100eb4u: goto label_100eb4;
        case 0x100eb8u: goto label_100eb8;
        case 0x100ebcu: goto label_100ebc;
        case 0x100ec0u: goto label_100ec0;
        case 0x100ec4u: goto label_100ec4;
        case 0x100ec8u: goto label_100ec8;
        case 0x100eccu: goto label_100ecc;
        case 0x100ed0u: goto label_100ed0;
        case 0x100ed4u: goto label_100ed4;
        case 0x100ed8u: goto label_100ed8;
        case 0x100edcu: goto label_100edc;
        case 0x100ee0u: goto label_100ee0;
        case 0x100ee4u: goto label_100ee4;
        case 0x100ee8u: goto label_100ee8;
        case 0x100eecu: goto label_100eec;
        case 0x100ef0u: goto label_100ef0;
        case 0x100ef4u: goto label_100ef4;
        case 0x100ef8u: goto label_100ef8;
        case 0x100efcu: goto label_100efc;
        case 0x100f00u: goto label_100f00;
        case 0x100f04u: goto label_100f04;
        case 0x100f08u: goto label_100f08;
        case 0x100f0cu: goto label_100f0c;
        case 0x100f10u: goto label_100f10;
        case 0x100f14u: goto label_100f14;
        case 0x100f18u: goto label_100f18;
        case 0x100f1cu: goto label_100f1c;
        case 0x100f20u: goto label_100f20;
        case 0x100f24u: goto label_100f24;
        case 0x100f28u: goto label_100f28;
        case 0x100f2cu: goto label_100f2c;
        case 0x100f30u: goto label_100f30;
        case 0x100f34u: goto label_100f34;
        case 0x100f38u: goto label_100f38;
        case 0x100f3cu: goto label_100f3c;
        case 0x100f40u: goto label_100f40;
        case 0x100f44u: goto label_100f44;
        case 0x100f48u: goto label_100f48;
        case 0x100f4cu: goto label_100f4c;
        case 0x100f50u: goto label_100f50;
        case 0x100f54u: goto label_100f54;
        case 0x100f58u: goto label_100f58;
        case 0x100f5cu: goto label_100f5c;
        case 0x100f60u: goto label_100f60;
        case 0x100f64u: goto label_100f64;
        case 0x100f68u: goto label_100f68;
        case 0x100f6cu: goto label_100f6c;
        case 0x100f70u: goto label_100f70;
        case 0x100f74u: goto label_100f74;
        case 0x100f78u: goto label_100f78;
        default: break;
    }

    ctx->pc = 0x100e70u;

label_100e70:
    // 0x100e70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x100e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_100e74:
    // 0x100e74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x100e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_100e78:
    // 0x100e78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x100e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_100e7c:
    // 0x100e7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x100e7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_100e80:
    // 0x100e80: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x100e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_100e84:
    // 0x100e84: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x100e84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_100e88:
    // 0x100e88: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x100e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_100e8c:
    // 0x100e8c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x100e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_100e90:
    // 0x100e90: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x100e90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_100e94:
    // 0x100e94: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x100e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_100e98:
    // 0x100e98: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x100e98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_100e9c:
    // 0x100e9c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x100e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_100ea0:
    // 0x100ea0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_100ea4:
    if (ctx->pc == 0x100EA4u) {
        ctx->pc = 0x100EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100EA0u;
        // 0x100ea4: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100EA8u;
        goto label_100ea8;
    }
    ctx->pc = 0x100EA0u;
    {
        const bool branch_taken_0x100ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100EA0u;
        // 0x100ea4: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100ea0) {
            ctx->pc = 0x100EC0u;
            goto label_100ec0;
        }
    }
    ctx->pc = 0x100EA8u;
label_100ea8:
    // 0x100ea8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x100ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_100eac:
    // 0x100eac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x100eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_100eb0:
    // 0x100eb0: 0x24a519b0  addiu       $a1, $a1, 0x19B0
    ctx->pc = 0x100eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6576));
label_100eb4:
    // 0x100eb4: 0x24060049  addiu       $a2, $zero, 0x49
    ctx->pc = 0x100eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
label_100eb8:
    // 0x100eb8: 0xc0415ec  jal         func_1057B0
label_100ebc:
    if (ctx->pc == 0x100EBCu) {
        ctx->pc = 0x100EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100EB8u;
        // 0x100ebc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100EC0u;
        goto label_100ec0;
    }
    ctx->pc = 0x100EB8u;
    SET_GPR_U32(ctx, 31, 0x100EC0u);
    ctx->pc = 0x100EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100EB8u;
    // 0x100ebc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x100EB8u, 0x100EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100EC0u;
label_100ec0:
    // 0x100ec0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x100ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_100ec4:
    // 0x100ec4: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
label_100ec8:
    if (ctx->pc == 0x100EC8u) {
        ctx->pc = 0x100EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100EC4u;
        // 0x100ec8: 0x8e060008  lw          $a2, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100ECCu;
        goto label_100ecc;
    }
    ctx->pc = 0x100EC4u;
    {
        const bool branch_taken_0x100ec4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x100ec4) {
            ctx->pc = 0x100EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100EC4u;
            // 0x100ec8: 0x8e060008  lw          $a2, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x100EF0u;
            goto label_100ef0;
        }
    }
    ctx->pc = 0x100ECCu;
label_100ecc:
    // 0x100ecc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x100eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_100ed0:
    // 0x100ed0: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x100ed0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_100ed4:
    // 0x100ed4: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
label_100ed8:
    if (ctx->pc == 0x100ED8u) {
        ctx->pc = 0x100ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100ED4u;
        // 0x100ed8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100EDCu;
        goto label_100edc;
    }
    ctx->pc = 0x100ED4u;
    {
        const bool branch_taken_0x100ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x100ed4) {
            ctx->pc = 0x100ED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100ED4u;
            // 0x100ed8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x100F60u;
            goto label_100f60;
        }
    }
    ctx->pc = 0x100EDCu;
label_100edc:
    // 0x100edc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_100ee0:
    if (ctx->pc == 0x100EE0u) {
        ctx->pc = 0x100EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100EDCu;
        // 0x100ee0: 0x8e060008  lw          $a2, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100EE4u;
        goto label_100ee4;
    }
    ctx->pc = 0x100EDCu;
    {
        const bool branch_taken_0x100edc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x100edc) {
            ctx->pc = 0x100EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100EDCu;
            // 0x100ee0: 0x8e060008  lw          $a2, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x100EF0u;
            goto label_100ef0;
        }
    }
    ctx->pc = 0x100EE4u;
label_100ee4:
    // 0x100ee4: 0xc067f04  jal         func_19FC10
label_100ee8:
    if (ctx->pc == 0x100EE8u) {
        ctx->pc = 0x100EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100EE4u;
        // 0x100ee8: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100EECu;
        goto label_100eec;
    }
    ctx->pc = 0x100EE4u;
    SET_GPR_U32(ctx, 31, 0x100EECu);
    ctx->pc = 0x100EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100EE4u;
    // 0x100ee8: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x100EE4u, 0x100EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100EECu;
label_100eec:
    // 0x100eec: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x100eecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_100ef0:
    // 0x100ef0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_100ef4:
    if (ctx->pc == 0x100EF4u) {
        ctx->pc = 0x100EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100EF0u;
        // 0x100ef4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100EF8u;
        goto label_100ef8;
    }
    ctx->pc = 0x100EF0u;
    {
        const bool branch_taken_0x100ef0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x100EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100EF0u;
        // 0x100ef4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100ef0) {
            ctx->pc = 0x100F10u;
            goto label_100f10;
        }
    }
    ctx->pc = 0x100EF8u;
label_100ef8:
    // 0x100ef8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x100ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_100efc:
    // 0x100efc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x100efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_100f00:
    // 0x100f00: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x100f00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_100f04:
    // 0x100f04: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x100f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_100f08:
    // 0x100f08: 0x60f809  jalr        $v1
label_100f0c:
    if (ctx->pc == 0x100F0Cu) {
        ctx->pc = 0x100F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100F08u;
        // 0x100f0c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100F10u;
        goto label_100f10;
    }
    ctx->pc = 0x100F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x100F10u);
        ctx->pc = 0x100F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100F08u;
        // 0x100f0c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100F08u, 0x100F10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x100F10u;
label_100f10:
    // 0x100f10: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x100f10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_100f14:
    // 0x100f14: 0x132980  sll         $a1, $s3, 6
    ctx->pc = 0x100f14u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
label_100f18:
    // 0x100f18: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x100f18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_100f1c:
    // 0x100f1c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x100f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_100f20:
    // 0x100f20: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x100f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_100f24:
    // 0x100f24: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
label_100f28:
    if (ctx->pc == 0x100F28u) {
        ctx->pc = 0x100F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100F24u;
        // 0x100f28: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100F2Cu;
        goto label_100f2c;
    }
    ctx->pc = 0x100F24u;
    {
        const bool branch_taken_0x100f24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x100F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100F24u;
        // 0x100f28: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100f24) {
            ctx->pc = 0x100F30u;
            goto label_100f30;
        }
    }
    ctx->pc = 0x100F2Cu;
label_100f2c:
    // 0x100f2c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x100f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_100f30:
    // 0x100f30: 0xc068086  jal         func_1A0218
label_100f34:
    if (ctx->pc == 0x100F34u) {
        ctx->pc = 0x100F38u;
        goto label_100f38;
    }
    ctx->pc = 0x100F30u;
    SET_GPR_U32(ctx, 31, 0x100F38u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x100F30u, 0x100F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100F38u;
label_100f38:
    // 0x100f38: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_100f3c:
    if (ctx->pc == 0x100F3Cu) {
        ctx->pc = 0x100F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100F38u;
        // 0x100f3c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100F40u;
        goto label_100f40;
    }
    ctx->pc = 0x100F38u;
    {
        const bool branch_taken_0x100f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100F38u;
        // 0x100f3c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100f38) {
            ctx->pc = 0x100F58u;
            goto label_100f58;
        }
    }
    ctx->pc = 0x100F40u;
label_100f40:
    // 0x100f40: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x100f40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_100f44:
    // 0x100f44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x100f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_100f48:
    // 0x100f48: 0x24a519b0  addiu       $a1, $a1, 0x19B0
    ctx->pc = 0x100f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6576));
label_100f4c:
    // 0x100f4c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x100f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_100f50:
    // 0x100f50: 0xc0415ec  jal         func_1057B0
label_100f54:
    if (ctx->pc == 0x100F54u) {
        ctx->pc = 0x100F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100F50u;
        // 0x100f54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100F58u;
        goto label_100f58;
    }
    ctx->pc = 0x100F50u;
    SET_GPR_U32(ctx, 31, 0x100F58u);
    ctx->pc = 0x100F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100F50u;
    // 0x100f54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x100F50u, 0x100F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100F58u;
label_100f58:
    // 0x100f58: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x100f58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
label_100f5c:
    // 0x100f5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x100f5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_100f60:
    // 0x100f60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x100f60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_100f64:
    // 0x100f64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x100f64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_100f68:
    // 0x100f68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x100f68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_100f6c:
    // 0x100f6c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x100f6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_100f70:
    // 0x100f70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x100f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_100f74:
    // 0x100f74: 0x3e00008  jr          $ra
label_100f78:
    if (ctx->pc == 0x100F78u) {
        ctx->pc = 0x100F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100F74u;
        // 0x100f78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100F7Cu;
        goto label_fallthrough_0x100f74;
    }
    ctx->pc = 0x100F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100F74u;
        // 0x100f78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x100f74:
    ctx->pc = 0x100F7Cu;
}
