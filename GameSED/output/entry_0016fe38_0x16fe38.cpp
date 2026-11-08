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

// Function: entry_0016fe38
// Address: 0x16fe38 - 0x16feb0
void entry_0016fe38_0x16fe38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016fe38_0x16fe38");
#endif

    switch (ctx->pc) {
        case 0x16fe4cu: goto label_16fe4c;
        case 0x16fe54u: goto label_16fe54;
        case 0x16fe60u: goto label_16fe60;
        case 0x16fe6cu: goto label_16fe6c;
        case 0x16fe74u: goto label_16fe74;
        case 0x16fea4u: goto label_16fea4;
        default: break;
    }

    ctx->pc = 0x16fe38u;

    // 0x16fe38: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x16fe38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x16fe3c: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x16fe3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x16fe40: 0x8f938d10  lw          $s3, -0x72F0($gp)
    ctx->pc = 0x16fe40u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x16fe44: 0xc06ab98  jal         func_1AAE60
    ctx->pc = 0x16FE44u;
    SET_GPR_U32(ctx, 31, 0x16FE4Cu);
    ctx->pc = 0x16FE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FE44u;
    // 0x16fe48: 0x8e72001c  lw          $s2, 0x1C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE60u, 0x16FE44u, 0x16FE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FE4Cu;
label_16fe4c:
    // 0x16fe4c: 0xc06ab72  jal         func_1AADC8
    ctx->pc = 0x16FE4Cu;
    SET_GPR_U32(ctx, 31, 0x16FE54u);
    ctx->pc = 0x16FE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FE4Cu;
    // 0x16fe50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AADC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AADC8u, 0x16FE4Cu, 0x16FE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FE54u;
label_16fe54:
    // 0x16fe54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16fe54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fe58: 0xc05d9ee  jal         func_1767B8
    ctx->pc = 0x16FE58u;
    SET_GPR_U32(ctx, 31, 0x16FE60u);
    ctx->pc = 0x16FE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FE58u;
    // 0x16fe5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1767B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1767B8u, 0x16FE58u, 0x16FE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FE60u;
label_16fe60:
    // 0x16fe60: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16fe60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fe64: 0xc06ab98  jal         func_1AAE60
    ctx->pc = 0x16FE64u;
    SET_GPR_U32(ctx, 31, 0x16FE6Cu);
    ctx->pc = 0x16FE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FE64u;
    // 0x16fe68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE60u, 0x16FE64u, 0x16FE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FE6Cu;
label_16fe6c:
    // 0x16fe6c: 0xc06ab72  jal         func_1AADC8
    ctx->pc = 0x16FE6Cu;
    SET_GPR_U32(ctx, 31, 0x16FE74u);
    ctx->pc = 0x16FE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FE6Cu;
    // 0x16fe70: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AADC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AADC8u, 0x16FE6Cu, 0x16FE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FE74u;
label_16fe74:
    // 0x16fe74: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x16fe74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x16fe78: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x16fe78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x16fe7c: 0x3c070400  lui         $a3, 0x400
    ctx->pc = 0x16fe7cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1024 << 16));
    // 0x16fe80: 0x24c67638  addiu       $a2, $a2, 0x7638
    ctx->pc = 0x16fe80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30264));
    // 0x16fe84: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x16fe84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16fe88: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x16fe88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x16fe8c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x16fe8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x16fe90: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16FE90u;
    {
        const bool branch_taken_0x16fe90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16FE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FE90u;
        // 0x16fe94: 0x26250080  addiu       $a1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fe90) {
            ctx->pc = 0x16FEB0u;
            return;
        }
    }
    ctx->pc = 0x16FE98u;
    // 0x16fe98: 0x3c060026  lui         $a2, 0x26
    ctx->pc = 0x16fe98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)38 << 16));
    // 0x16fe9c: 0xc066ea0  jal         func_19BA80
    ctx->pc = 0x16FE9Cu;
    SET_GPR_U32(ctx, 31, 0x16FEA4u);
    ctx->pc = 0x16FEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FE9Cu;
    // 0x16fea0: 0x24c6d440  addiu       $a2, $a2, -0x2BC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BA80u, 0x16FE9Cu, 0x16FEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FEA4u;
label_16fea4:
    // 0x16fea4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x16FEA4u;
    {
        const bool branch_taken_0x16fea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FEA4u;
        // 0x16fea8: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fea4) {
            ctx->pc = 0x16FEBCu;
            return;
        }
    }
    ctx->pc = 0x16FEACu;
    // 0x16feac: 0x0  nop
    ctx->pc = 0x16feacu;
    // NOP
    ctx->pc = 0x16feb0u;
}
