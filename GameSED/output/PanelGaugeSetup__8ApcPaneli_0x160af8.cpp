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

// Function: PanelGaugeSetup__8ApcPaneli
// Address: 0x160af8 - 0x160b98
void PanelGaugeSetup__8ApcPaneli_0x160af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PanelGaugeSetup__8ApcPaneli_0x160af8");
#endif

    switch (ctx->pc) {
        case 0x160b58u: goto label_160b58;
        case 0x160b70u: goto label_160b70;
        case 0x160b88u: goto label_160b88;
        default: break;
    }

    ctx->pc = 0x160af8u;

    // 0x160af8: 0x8f828b38  lw          $v0, -0x74C8($gp)
    ctx->pc = 0x160af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937400)));
    // 0x160afc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x160afcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x160b00: 0x97868b38  lhu         $a2, -0x74C8($gp)
    ctx->pc = 0x160b00u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937400)));
    // 0x160b04: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x160b04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x160b08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x160b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x160b0c: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x160b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x160b10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x160b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x160b14: 0x9463a290  lhu         $v1, -0x5D70($v1)
    ctx->pc = 0x160b14u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294943376)));
    // 0x160b18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x160b18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160b1c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x160b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x160b20: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x160b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x160b24: 0xa6030014  sh          $v1, 0x14($s0)
    ctx->pc = 0x160b24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x160b28: 0xa606001c  sh          $a2, 0x1C($s0)
    ctx->pc = 0x160b28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 6));
    // 0x160b2c: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x160b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x160b30: 0xa602001e  sh          $v0, 0x1E($s0)
    ctx->pc = 0x160b30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x160b34: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x160B34u;
    {
        const bool branch_taken_0x160b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160B34u;
        // 0x160b38: 0xa6000016  sh          $zero, 0x16($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160b34) {
            ctx->pc = 0x160B40u;
            goto label_160b40;
        }
    }
    ctx->pc = 0x160B3Cu;
    // 0x160b3c: 0xa603001e  sh          $v1, 0x1E($s0)
    ctx->pc = 0x160b3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 3));
label_160b40:
    // 0x160b40: 0x96020014  lhu         $v0, 0x14($s0)
    ctx->pc = 0x160b40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x160b44: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x160b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x160b48: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x160B48u;
    {
        const bool branch_taken_0x160b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160B48u;
        // 0x160b4c: 0xae050018  sw          $a1, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160b48) {
            ctx->pc = 0x160B58u;
            goto label_160b58;
        }
    }
    ctx->pc = 0x160B50u;
    // 0x160b50: 0xc057546  jal         func_15D518
    ctx->pc = 0x160B50u;
    SET_GPR_U32(ctx, 31, 0x160B58u);
    ctx->pc = 0x15D518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D518u, 0x160B50u, 0x160B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160B58u;
label_160b58:
    // 0x160b58: 0x96020014  lhu         $v0, 0x14($s0)
    ctx->pc = 0x160b58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x160b5c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x160b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x160b60: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x160B60u;
    {
        const bool branch_taken_0x160b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x160b60) {
            ctx->pc = 0x160B64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160B60u;
            // 0x160b64: 0x96020014  lhu         $v0, 0x14($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160B74u;
            goto label_160b74;
        }
    }
    ctx->pc = 0x160B68u;
    // 0x160b68: 0xc05767a  jal         func_15D9E8
    ctx->pc = 0x160B68u;
    SET_GPR_U32(ctx, 31, 0x160B70u);
    ctx->pc = 0x160B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160B68u;
    // 0x160b6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D9E8u, 0x160B68u, 0x160B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160B70u;
label_160b70:
    // 0x160b70: 0x96020014  lhu         $v0, 0x14($s0)
    ctx->pc = 0x160b70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
label_160b74:
    // 0x160b74: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x160b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x160b78: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x160B78u;
    {
        const bool branch_taken_0x160b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x160b78) {
            ctx->pc = 0x160B7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160B78u;
            // 0x160b7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160B8Cu;
            goto label_160b8c;
        }
    }
    ctx->pc = 0x160B80u;
    // 0x160b80: 0xc0573e2  jal         func_15CF88
    ctx->pc = 0x160B80u;
    SET_GPR_U32(ctx, 31, 0x160B88u);
    ctx->pc = 0x160B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160B80u;
    // 0x160b84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF88u, 0x160B80u, 0x160B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160B88u;
label_160b88:
    // 0x160b88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x160b88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_160b8c:
    // 0x160b8c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x160b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x160b90: 0x3e00008  jr          $ra
    ctx->pc = 0x160B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160B90u;
        // 0x160b94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160B98u;
}
