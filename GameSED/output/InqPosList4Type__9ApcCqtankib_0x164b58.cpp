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

// Function: InqPosList4Type__9ApcCqtankib
// Address: 0x164b58 - 0x164bcc
void InqPosList4Type__9ApcCqtankib_0x164b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InqPosList4Type__9ApcCqtankib_0x164b58");
#endif

    switch (ctx->pc) {
        case 0x164bc4u: goto label_164bc4;
        default: break;
    }

    ctx->pc = 0x164b58u;

    // 0x164b58: 0x24a5ffee  addiu       $a1, $a1, -0x12
    ctx->pc = 0x164b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967278));
    // 0x164b5c: 0x2ca2000f  sltiu       $v0, $a1, 0xF
    ctx->pc = 0x164b5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x164b60: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x164B60u;
    {
        const bool branch_taken_0x164b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B60u;
        // 0x164b64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164b60) {
            ctx->pc = 0x164BACu;
            goto label_164bac;
        }
    }
    ctx->pc = 0x164B68u;
    // 0x164b68: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x164b68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x164b6c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x164b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x164b70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x164b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x164b74: 0x8c637030  lw          $v1, 0x7030($v1)
    ctx->pc = 0x164b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28720)));
    // 0x164b78: 0x600008  jr          $v1
    ctx->pc = 0x164B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x164B80u: goto label_164b80;
            case 0x164B88u: goto label_164b88;
            case 0x164B90u: goto label_164b90;
            case 0x164B98u: goto label_164b98;
            case 0x164BA0u: goto label_164ba0;
            case 0x164BA8u: goto label_164ba8;
            case 0x164BACu: goto label_164bac;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164B78u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x164B80u;
label_164b80:
    // 0x164b80: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x164B80u;
    {
        const bool branch_taken_0x164b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B80u;
        // 0x164b84: 0x248719e4  addiu       $a3, $a0, 0x19E4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 6628));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164b80) {
            ctx->pc = 0x164BACu;
            goto label_164bac;
        }
    }
    ctx->pc = 0x164B88u;
label_164b88:
    // 0x164b88: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x164B88u;
    {
        const bool branch_taken_0x164b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B88u;
        // 0x164b8c: 0x248719f0  addiu       $a3, $a0, 0x19F0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 6640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164b88) {
            ctx->pc = 0x164BACu;
            goto label_164bac;
        }
    }
    ctx->pc = 0x164B90u;
label_164b90:
    // 0x164b90: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x164B90u;
    {
        const bool branch_taken_0x164b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B90u;
        // 0x164b94: 0x248719fc  addiu       $a3, $a0, 0x19FC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 6652));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164b90) {
            ctx->pc = 0x164BACu;
            goto label_164bac;
        }
    }
    ctx->pc = 0x164B98u;
label_164b98:
    // 0x164b98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x164B98u;
    {
        const bool branch_taken_0x164b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B98u;
        // 0x164b9c: 0x24871a08  addiu       $a3, $a0, 0x1A08 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 6664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164b98) {
            ctx->pc = 0x164BACu;
            goto label_164bac;
        }
    }
    ctx->pc = 0x164BA0u;
label_164ba0:
    // 0x164ba0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x164BA0u;
    {
        const bool branch_taken_0x164ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164BA0u;
        // 0x164ba4: 0x24871a14  addiu       $a3, $a0, 0x1A14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 6676));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164ba0) {
            ctx->pc = 0x164BACu;
            goto label_164bac;
        }
    }
    ctx->pc = 0x164BA8u;
label_164ba8:
    // 0x164ba8: 0x24871a20  addiu       $a3, $a0, 0x1A20
    ctx->pc = 0x164ba8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 6688));
label_164bac:
    // 0x164bac: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x164BACu;
    {
        const bool branch_taken_0x164bac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x164bac) {
            ctx->pc = 0x164BC4u;
            goto label_164bc4;
        }
    }
    ctx->pc = 0x164BB4u;
    // 0x164bb4: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x164BB4u;
    {
        const bool branch_taken_0x164bb4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x164bb4) {
            ctx->pc = 0x164BC4u;
            goto label_164bc4;
        }
    }
    ctx->pc = 0x164BBCu;
    // 0x164bbc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x164bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x164bc0: 0x2380a  movz        $a3, $zero, $v0
    ctx->pc = 0x164bc0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_164bc4:
    // 0x164bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x164BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164BC4u;
        // 0x164bc8: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164BCCu;
}
