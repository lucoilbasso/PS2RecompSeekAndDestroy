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

// Function: FuelGaugeVisible__8ApcPanelb
// Address: 0x15baf0 - 0x15bcf8
void FuelGaugeVisible__8ApcPanelb_0x15baf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FuelGaugeVisible__8ApcPanelb_0x15baf0");
#endif

    switch (ctx->pc) {
        case 0x15baf0u: goto label_15baf0;
        case 0x15baf4u: goto label_15baf4;
        case 0x15baf8u: goto label_15baf8;
        case 0x15bafcu: goto label_15bafc;
        case 0x15bb00u: goto label_15bb00;
        case 0x15bb04u: goto label_15bb04;
        case 0x15bb08u: goto label_15bb08;
        case 0x15bb0cu: goto label_15bb0c;
        case 0x15bb10u: goto label_15bb10;
        case 0x15bb14u: goto label_15bb14;
        case 0x15bb18u: goto label_15bb18;
        case 0x15bb1cu: goto label_15bb1c;
        case 0x15bb20u: goto label_15bb20;
        case 0x15bb24u: goto label_15bb24;
        case 0x15bb28u: goto label_15bb28;
        case 0x15bb2cu: goto label_15bb2c;
        case 0x15bb30u: goto label_15bb30;
        case 0x15bb34u: goto label_15bb34;
        case 0x15bb38u: goto label_15bb38;
        case 0x15bb3cu: goto label_15bb3c;
        case 0x15bb40u: goto label_15bb40;
        case 0x15bb44u: goto label_15bb44;
        case 0x15bb48u: goto label_15bb48;
        case 0x15bb4cu: goto label_15bb4c;
        case 0x15bb50u: goto label_15bb50;
        case 0x15bb54u: goto label_15bb54;
        case 0x15bb58u: goto label_15bb58;
        case 0x15bb5cu: goto label_15bb5c;
        case 0x15bb60u: goto label_15bb60;
        case 0x15bb64u: goto label_15bb64;
        case 0x15bb68u: goto label_15bb68;
        case 0x15bb6cu: goto label_15bb6c;
        case 0x15bb70u: goto label_15bb70;
        case 0x15bb74u: goto label_15bb74;
        case 0x15bb78u: goto label_15bb78;
        case 0x15bb7cu: goto label_15bb7c;
        case 0x15bb80u: goto label_15bb80;
        case 0x15bb84u: goto label_15bb84;
        case 0x15bb88u: goto label_15bb88;
        case 0x15bb8cu: goto label_15bb8c;
        case 0x15bb90u: goto label_15bb90;
        case 0x15bb94u: goto label_15bb94;
        case 0x15bb98u: goto label_15bb98;
        case 0x15bb9cu: goto label_15bb9c;
        case 0x15bba0u: goto label_15bba0;
        case 0x15bba4u: goto label_15bba4;
        case 0x15bba8u: goto label_15bba8;
        case 0x15bbacu: goto label_15bbac;
        case 0x15bbb0u: goto label_15bbb0;
        case 0x15bbb4u: goto label_15bbb4;
        case 0x15bbb8u: goto label_15bbb8;
        case 0x15bbbcu: goto label_15bbbc;
        case 0x15bbc0u: goto label_15bbc0;
        case 0x15bbc4u: goto label_15bbc4;
        case 0x15bbc8u: goto label_15bbc8;
        case 0x15bbccu: goto label_15bbcc;
        case 0x15bbd0u: goto label_15bbd0;
        case 0x15bbd4u: goto label_15bbd4;
        case 0x15bbd8u: goto label_15bbd8;
        case 0x15bbdcu: goto label_15bbdc;
        case 0x15bbe0u: goto label_15bbe0;
        case 0x15bbe4u: goto label_15bbe4;
        case 0x15bbe8u: goto label_15bbe8;
        case 0x15bbecu: goto label_15bbec;
        case 0x15bbf0u: goto label_15bbf0;
        case 0x15bbf4u: goto label_15bbf4;
        case 0x15bbf8u: goto label_15bbf8;
        case 0x15bbfcu: goto label_15bbfc;
        case 0x15bc00u: goto label_15bc00;
        case 0x15bc04u: goto label_15bc04;
        case 0x15bc08u: goto label_15bc08;
        case 0x15bc0cu: goto label_15bc0c;
        case 0x15bc10u: goto label_15bc10;
        case 0x15bc14u: goto label_15bc14;
        case 0x15bc18u: goto label_15bc18;
        case 0x15bc1cu: goto label_15bc1c;
        case 0x15bc20u: goto label_15bc20;
        case 0x15bc24u: goto label_15bc24;
        case 0x15bc28u: goto label_15bc28;
        case 0x15bc2cu: goto label_15bc2c;
        case 0x15bc30u: goto label_15bc30;
        case 0x15bc34u: goto label_15bc34;
        case 0x15bc38u: goto label_15bc38;
        case 0x15bc3cu: goto label_15bc3c;
        case 0x15bc40u: goto label_15bc40;
        case 0x15bc44u: goto label_15bc44;
        case 0x15bc48u: goto label_15bc48;
        case 0x15bc4cu: goto label_15bc4c;
        case 0x15bc50u: goto label_15bc50;
        case 0x15bc54u: goto label_15bc54;
        case 0x15bc58u: goto label_15bc58;
        case 0x15bc5cu: goto label_15bc5c;
        case 0x15bc60u: goto label_15bc60;
        case 0x15bc64u: goto label_15bc64;
        case 0x15bc68u: goto label_15bc68;
        case 0x15bc6cu: goto label_15bc6c;
        case 0x15bc70u: goto label_15bc70;
        case 0x15bc74u: goto label_15bc74;
        case 0x15bc78u: goto label_15bc78;
        case 0x15bc7cu: goto label_15bc7c;
        case 0x15bc80u: goto label_15bc80;
        case 0x15bc84u: goto label_15bc84;
        case 0x15bc88u: goto label_15bc88;
        case 0x15bc8cu: goto label_15bc8c;
        case 0x15bc90u: goto label_15bc90;
        case 0x15bc94u: goto label_15bc94;
        case 0x15bc98u: goto label_15bc98;
        case 0x15bc9cu: goto label_15bc9c;
        case 0x15bca0u: goto label_15bca0;
        case 0x15bca4u: goto label_15bca4;
        case 0x15bca8u: goto label_15bca8;
        case 0x15bcacu: goto label_15bcac;
        case 0x15bcb0u: goto label_15bcb0;
        case 0x15bcb4u: goto label_15bcb4;
        case 0x15bcb8u: goto label_15bcb8;
        case 0x15bcbcu: goto label_15bcbc;
        case 0x15bcc0u: goto label_15bcc0;
        case 0x15bcc4u: goto label_15bcc4;
        case 0x15bcc8u: goto label_15bcc8;
        case 0x15bcccu: goto label_15bccc;
        case 0x15bcd0u: goto label_15bcd0;
        case 0x15bcd4u: goto label_15bcd4;
        case 0x15bcd8u: goto label_15bcd8;
        case 0x15bcdcu: goto label_15bcdc;
        case 0x15bce0u: goto label_15bce0;
        case 0x15bce4u: goto label_15bce4;
        case 0x15bce8u: goto label_15bce8;
        case 0x15bcecu: goto label_15bcec;
        case 0x15bcf0u: goto label_15bcf0;
        case 0x15bcf4u: goto label_15bcf4;
        default: break;
    }

    ctx->pc = 0x15baf0u;

label_15baf0:
    // 0x15baf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15baf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_15baf4:
    // 0x15baf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15baf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_15baf8:
    // 0x15baf8: 0x24900060  addiu       $s0, $a0, 0x60
    ctx->pc = 0x15baf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_15bafc:
    // 0x15bafc: 0x14a0002a  bnez        $a1, . + 4 + (0x2A << 2)
label_15bb00:
    if (ctx->pc == 0x15BB00u) {
        ctx->pc = 0x15BB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BAFCu;
        // 0x15bb00: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BB04u;
        goto label_15bb04;
    }
    ctx->pc = 0x15BAFCu;
    {
        const bool branch_taken_0x15bafc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x15BB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BAFCu;
        // 0x15bb00: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bafc) {
            ctx->pc = 0x15BBA8u;
            goto label_15bba8;
        }
    }
    ctx->pc = 0x15BB04u;
label_15bb04:
    // 0x15bb04: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15bb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15bb08:
    // 0x15bb08: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15bb08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15bb0c:
    // 0x15bb0c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15bb0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_15bb10:
    // 0x15bb10: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15bb14:
    if (ctx->pc == 0x15BB14u) {
        ctx->pc = 0x15BB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB10u;
        // 0x15bb14: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BB18u;
        goto label_15bb18;
    }
    ctx->pc = 0x15BB10u;
    {
        const bool branch_taken_0x15bb10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB10u;
        // 0x15bb14: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bb10) {
            ctx->pc = 0x15BB30u;
            goto label_15bb30;
        }
    }
    ctx->pc = 0x15BB18u;
label_15bb18:
    // 0x15bb18: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15bb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15bb1c:
    // 0x15bb1c: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15bb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15bb20:
    // 0x15bb20: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15bb20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15bb24:
    // 0x15bb24: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15bb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15bb28:
    // 0x15bb28: 0x60f809  jalr        $v1
label_15bb2c:
    if (ctx->pc == 0x15BB2Cu) {
        ctx->pc = 0x15BB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB28u;
        // 0x15bb2c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BB30u;
        goto label_15bb30;
    }
    ctx->pc = 0x15BB28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15BB30u);
        ctx->pc = 0x15BB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB28u;
        // 0x15bb2c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BB28u, 0x15BB30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15BB30u;
label_15bb30:
    // 0x15bb30: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x15bb30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_15bb34:
    // 0x15bb34: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15bb38:
    if (ctx->pc == 0x15BB38u) {
        ctx->pc = 0x15BB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB34u;
        // 0x15bb38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BB3Cu;
        goto label_15bb3c;
    }
    ctx->pc = 0x15BB34u;
    {
        const bool branch_taken_0x15bb34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB34u;
        // 0x15bb38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bb34) {
            ctx->pc = 0x15BB54u;
            goto label_15bb54;
        }
    }
    ctx->pc = 0x15BB3Cu;
label_15bb3c:
    // 0x15bb3c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15bb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15bb40:
    // 0x15bb40: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15bb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15bb44:
    // 0x15bb44: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15bb44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15bb48:
    // 0x15bb48: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15bb48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15bb4c:
    // 0x15bb4c: 0x60f809  jalr        $v1
label_15bb50:
    if (ctx->pc == 0x15BB50u) {
        ctx->pc = 0x15BB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB4Cu;
        // 0x15bb50: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BB54u;
        goto label_15bb54;
    }
    ctx->pc = 0x15BB4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15BB54u);
        ctx->pc = 0x15BB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB4Cu;
        // 0x15bb50: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BB4Cu, 0x15BB54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15BB54u;
label_15bb54:
    // 0x15bb54: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15bb54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15bb58:
    // 0x15bb58: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15bb5c:
    if (ctx->pc == 0x15BB5Cu) {
        ctx->pc = 0x15BB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB58u;
        // 0x15bb5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BB60u;
        goto label_15bb60;
    }
    ctx->pc = 0x15BB58u;
    {
        const bool branch_taken_0x15bb58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB58u;
        // 0x15bb5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bb58) {
            ctx->pc = 0x15BB78u;
            goto label_15bb78;
        }
    }
    ctx->pc = 0x15BB60u;
label_15bb60:
    // 0x15bb60: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15bb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15bb64:
    // 0x15bb64: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15bb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15bb68:
    // 0x15bb68: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15bb68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15bb6c:
    // 0x15bb6c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15bb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15bb70:
    // 0x15bb70: 0x60f809  jalr        $v1
label_15bb74:
    if (ctx->pc == 0x15BB74u) {
        ctx->pc = 0x15BB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB70u;
        // 0x15bb74: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BB78u;
        goto label_15bb78;
    }
    ctx->pc = 0x15BB70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15BB78u);
        ctx->pc = 0x15BB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB70u;
        // 0x15bb74: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BB70u, 0x15BB78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15BB78u;
label_15bb78:
    // 0x15bb78: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15bb78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15bb7c:
    // 0x15bb7c: 0x10c0005a  beqz        $a2, . + 4 + (0x5A << 2)
label_15bb80:
    if (ctx->pc == 0x15BB80u) {
        ctx->pc = 0x15BB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB7Cu;
        // 0x15bb80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BB84u;
        goto label_15bb84;
    }
    ctx->pc = 0x15BB7Cu;
    {
        const bool branch_taken_0x15bb7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB7Cu;
        // 0x15bb80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bb7c) {
            ctx->pc = 0x15BCE8u;
            goto label_15bce8;
        }
    }
    ctx->pc = 0x15BB84u;
label_15bb84:
    // 0x15bb84: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15bb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15bb88:
    // 0x15bb88: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15bb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15bb8c:
    // 0x15bb8c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15bb8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15bb90:
    // 0x15bb90: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15bb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15bb94:
    // 0x15bb94: 0x60f809  jalr        $v1
label_15bb98:
    if (ctx->pc == 0x15BB98u) {
        ctx->pc = 0x15BB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB94u;
        // 0x15bb98: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BB9Cu;
        goto label_15bb9c;
    }
    ctx->pc = 0x15BB94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15BB9Cu);
        ctx->pc = 0x15BB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB94u;
        // 0x15bb98: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BB94u, 0x15BB9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15BB9Cu;
label_15bb9c:
    // 0x15bb9c: 0x10000053  b           . + 4 + (0x53 << 2)
label_15bba0:
    if (ctx->pc == 0x15BBA0u) {
        ctx->pc = 0x15BBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB9Cu;
        // 0x15bba0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BBA4u;
        goto label_15bba4;
    }
    ctx->pc = 0x15BB9Cu;
    {
        const bool branch_taken_0x15bb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB9Cu;
        // 0x15bba0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bb9c) {
            ctx->pc = 0x15BCECu;
            goto label_15bcec;
        }
    }
    ctx->pc = 0x15BBA4u;
label_15bba4:
    // 0x15bba4: 0x0  nop
    ctx->pc = 0x15bba4u;
    // NOP
label_15bba8:
    // 0x15bba8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15bba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15bbac:
    // 0x15bbac: 0x2403bfff  addiu       $v1, $zero, -0x4001
    ctx->pc = 0x15bbacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
label_15bbb0:
    // 0x15bbb0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15bbb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15bbb4:
    // 0x15bbb4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x15bbb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_15bbb8:
    // 0x15bbb8: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_15bbbc:
    if (ctx->pc == 0x15BBBCu) {
        ctx->pc = 0x15BBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BBB8u;
        // 0x15bbbc: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BBC0u;
        goto label_15bbc0;
    }
    ctx->pc = 0x15BBB8u;
    {
        const bool branch_taken_0x15bbb8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BBB8u;
        // 0x15bbbc: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bbb8) {
            ctx->pc = 0x15BBDCu;
            goto label_15bbdc;
        }
    }
    ctx->pc = 0x15BBC0u;
label_15bbc0:
    // 0x15bbc0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15bbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15bbc4:
    // 0x15bbc4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15bbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15bbc8:
    // 0x15bbc8: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15bbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15bbcc:
    // 0x15bbcc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15bbccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15bbd0:
    // 0x15bbd0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15bbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15bbd4:
    // 0x15bbd4: 0x60f809  jalr        $v1
label_15bbd8:
    if (ctx->pc == 0x15BBD8u) {
        ctx->pc = 0x15BBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BBD4u;
        // 0x15bbd8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BBDCu;
        goto label_15bbdc;
    }
    ctx->pc = 0x15BBD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15BBDCu);
        ctx->pc = 0x15BBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BBD4u;
        // 0x15bbd8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BBD4u, 0x15BBDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15BBDCu;
label_15bbdc:
    // 0x15bbdc: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x15bbdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_15bbe0:
    // 0x15bbe0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15bbe4:
    if (ctx->pc == 0x15BBE4u) {
        ctx->pc = 0x15BBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BBE0u;
        // 0x15bbe4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BBE8u;
        goto label_15bbe8;
    }
    ctx->pc = 0x15BBE0u;
    {
        const bool branch_taken_0x15bbe0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BBE0u;
        // 0x15bbe4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bbe0) {
            ctx->pc = 0x15BC00u;
            goto label_15bc00;
        }
    }
    ctx->pc = 0x15BBE8u;
label_15bbe8:
    // 0x15bbe8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15bbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15bbec:
    // 0x15bbec: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15bbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15bbf0:
    // 0x15bbf0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15bbf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15bbf4:
    // 0x15bbf4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15bbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15bbf8:
    // 0x15bbf8: 0x60f809  jalr        $v1
label_15bbfc:
    if (ctx->pc == 0x15BBFCu) {
        ctx->pc = 0x15BBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BBF8u;
        // 0x15bbfc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BC00u;
        goto label_15bc00;
    }
    ctx->pc = 0x15BBF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15BC00u);
        ctx->pc = 0x15BBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BBF8u;
        // 0x15bbfc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BBF8u, 0x15BC00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15BC00u;
label_15bc00:
    // 0x15bc00: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x15bc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15bc04:
    // 0x15bc04: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
label_15bc08:
    if (ctx->pc == 0x15BC08u) {
        ctx->pc = 0x15BC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC04u;
        // 0x15bc08: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BC0Cu;
        goto label_15bc0c;
    }
    ctx->pc = 0x15BC04u;
    {
        const bool branch_taken_0x15bc04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bc04) {
            ctx->pc = 0x15BC08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15BC04u;
            // 0x15bc08: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15BCECu;
            goto label_15bcec;
        }
    }
    ctx->pc = 0x15BC0Cu;
label_15bc0c:
    // 0x15bc0c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15bc0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15bc10:
    // 0x15bc10: 0x50c00036  beql        $a2, $zero, . + 4 + (0x36 << 2)
label_15bc14:
    if (ctx->pc == 0x15BC14u) {
        ctx->pc = 0x15BC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC10u;
        // 0x15bc14: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BC18u;
        goto label_15bc18;
    }
    ctx->pc = 0x15BC10u;
    {
        const bool branch_taken_0x15bc10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bc10) {
            ctx->pc = 0x15BC14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15BC10u;
            // 0x15bc14: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15BCECu;
            goto label_15bcec;
        }
    }
    ctx->pc = 0x15BC18u;
label_15bc18:
    // 0x15bc18: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15bc18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15bc1c:
    // 0x15bc1c: 0x313c3  sra         $v0, $v1, 15
    ctx->pc = 0x15bc1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 15));
label_15bc20:
    // 0x15bc20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15bc20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15bc24:
    // 0x15bc24: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_15bc28:
    if (ctx->pc == 0x15BC28u) {
        ctx->pc = 0x15BC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC24u;
        // 0x15bc28: 0x31383  sra         $v0, $v1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BC2Cu;
        goto label_15bc2c;
    }
    ctx->pc = 0x15BC24u;
    {
        const bool branch_taken_0x15bc24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC24u;
        // 0x15bc28: 0x31383  sra         $v0, $v1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bc24) {
            ctx->pc = 0x15BC88u;
            goto label_15bc88;
        }
    }
    ctx->pc = 0x15BC2Cu;
label_15bc2c:
    // 0x15bc2c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15bc2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15bc30:
    // 0x15bc30: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_15bc34:
    if (ctx->pc == 0x15BC34u) {
        ctx->pc = 0x15BC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC30u;
        // 0x15bc34: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BC38u;
        goto label_15bc38;
    }
    ctx->pc = 0x15BC30u;
    {
        const bool branch_taken_0x15bc30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15bc30) {
            ctx->pc = 0x15BC34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15BC30u;
            // 0x15bc34: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15BC7Cu;
            goto label_15bc7c;
        }
    }
    ctx->pc = 0x15BC38u;
label_15bc38:
    // 0x15bc38: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15bc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15bc3c:
    // 0x15bc3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15bc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15bc40:
    // 0x15bc40: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15bc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15bc44:
    // 0x15bc44: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15bc44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15bc48:
    // 0x15bc48: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15bc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15bc4c:
    // 0x15bc4c: 0x60f809  jalr        $v1
label_15bc50:
    if (ctx->pc == 0x15BC50u) {
        ctx->pc = 0x15BC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC4Cu;
        // 0x15bc50: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BC54u;
        goto label_15bc54;
    }
    ctx->pc = 0x15BC4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15BC54u);
        ctx->pc = 0x15BC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC4Cu;
        // 0x15bc50: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BC4Cu, 0x15BC54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15BC54u;
label_15bc54:
    // 0x15bc54: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15bc54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15bc58:
    // 0x15bc58: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15bc5c:
    if (ctx->pc == 0x15BC5Cu) {
        ctx->pc = 0x15BC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC58u;
        // 0x15bc5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BC60u;
        goto label_15bc60;
    }
    ctx->pc = 0x15BC58u;
    {
        const bool branch_taken_0x15bc58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC58u;
        // 0x15bc5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bc58) {
            ctx->pc = 0x15BC78u;
            goto label_15bc78;
        }
    }
    ctx->pc = 0x15BC60u;
label_15bc60:
    // 0x15bc60: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15bc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15bc64:
    // 0x15bc64: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15bc64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15bc68:
    // 0x15bc68: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15bc68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15bc6c:
    // 0x15bc6c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15bc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15bc70:
    // 0x15bc70: 0x60f809  jalr        $v1
label_15bc74:
    if (ctx->pc == 0x15BC74u) {
        ctx->pc = 0x15BC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC70u;
        // 0x15bc74: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BC78u;
        goto label_15bc78;
    }
    ctx->pc = 0x15BC70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15BC78u);
        ctx->pc = 0x15BC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC70u;
        // 0x15bc74: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BC70u, 0x15BC78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15BC78u;
label_15bc78:
    // 0x15bc78: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15bc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15bc7c:
    // 0x15bc7c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x15bc7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_15bc80:
    // 0x15bc80: 0x10000019  b           . + 4 + (0x19 << 2)
label_15bc84:
    if (ctx->pc == 0x15BC84u) {
        ctx->pc = 0x15BC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC80u;
        // 0x15bc84: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BC88u;
        goto label_15bc88;
    }
    ctx->pc = 0x15BC80u;
    {
        const bool branch_taken_0x15bc80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC80u;
        // 0x15bc84: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bc80) {
            ctx->pc = 0x15BCE8u;
            goto label_15bce8;
        }
    }
    ctx->pc = 0x15BC88u;
label_15bc88:
    // 0x15bc88: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15bc88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15bc8c:
    // 0x15bc8c: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_15bc90:
    if (ctx->pc == 0x15BC90u) {
        ctx->pc = 0x15BC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC8Cu;
        // 0x15bc90: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BC94u;
        goto label_15bc94;
    }
    ctx->pc = 0x15BC8Cu;
    {
        const bool branch_taken_0x15bc8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15bc8c) {
            ctx->pc = 0x15BC90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15BC8Cu;
            // 0x15bc90: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15BCD8u;
            goto label_15bcd8;
        }
    }
    ctx->pc = 0x15BC94u;
label_15bc94:
    // 0x15bc94: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15bc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15bc98:
    // 0x15bc98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15bc98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15bc9c:
    // 0x15bc9c: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15bc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15bca0:
    // 0x15bca0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15bca0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15bca4:
    // 0x15bca4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15bca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15bca8:
    // 0x15bca8: 0x60f809  jalr        $v1
label_15bcac:
    if (ctx->pc == 0x15BCACu) {
        ctx->pc = 0x15BCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BCA8u;
        // 0x15bcac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BCB0u;
        goto label_15bcb0;
    }
    ctx->pc = 0x15BCA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15BCB0u);
        ctx->pc = 0x15BCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BCA8u;
        // 0x15bcac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BCA8u, 0x15BCB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15BCB0u;
label_15bcb0:
    // 0x15bcb0: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15bcb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15bcb4:
    // 0x15bcb4: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15bcb8:
    if (ctx->pc == 0x15BCB8u) {
        ctx->pc = 0x15BCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BCB4u;
        // 0x15bcb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BCBCu;
        goto label_15bcbc;
    }
    ctx->pc = 0x15BCB4u;
    {
        const bool branch_taken_0x15bcb4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BCB4u;
        // 0x15bcb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bcb4) {
            ctx->pc = 0x15BCD4u;
            goto label_15bcd4;
        }
    }
    ctx->pc = 0x15BCBCu;
label_15bcbc:
    // 0x15bcbc: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15bcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15bcc0:
    // 0x15bcc0: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15bcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15bcc4:
    // 0x15bcc4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15bcc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15bcc8:
    // 0x15bcc8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15bcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15bccc:
    // 0x15bccc: 0x60f809  jalr        $v1
label_15bcd0:
    if (ctx->pc == 0x15BCD0u) {
        ctx->pc = 0x15BCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BCCCu;
        // 0x15bcd0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BCD4u;
        goto label_15bcd4;
    }
    ctx->pc = 0x15BCCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15BCD4u);
        ctx->pc = 0x15BCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BCCCu;
        // 0x15bcd0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BCCCu, 0x15BCD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15BCD4u;
label_15bcd4:
    // 0x15bcd4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15bcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15bcd8:
    // 0x15bcd8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x15bcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_15bcdc:
    // 0x15bcdc: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x15bcdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
label_15bce0:
    // 0x15bce0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x15bce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_15bce4:
    // 0x15bce4: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x15bce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_15bce8:
    // 0x15bce8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15bce8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15bcec:
    // 0x15bcec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x15bcecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_15bcf0:
    // 0x15bcf0: 0x3e00008  jr          $ra
label_15bcf4:
    if (ctx->pc == 0x15BCF4u) {
        ctx->pc = 0x15BCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BCF0u;
        // 0x15bcf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BCF8u;
        goto label_fallthrough_0x15bcf0;
    }
    ctx->pc = 0x15BCF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BCF0u;
        // 0x15bcf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BCF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15bcf0:
    ctx->pc = 0x15BCF8u;
}
