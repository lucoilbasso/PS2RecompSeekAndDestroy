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

// Function: B_EUC2SJIS__FUi
// Address: 0x19c688 - 0x19c748
void B_EUC2SJIS__FUi_0x19c688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("B_EUC2SJIS__FUi_0x19c688");
#endif

    ctx->pc = 0x19c688u;

    // 0x19c688: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x19c688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x19c68c: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x19c68cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x19c690: 0x2466f1d8  addiu       $a2, $v1, -0xE28
    ctx->pc = 0x19c690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963672));
    // 0x19c694: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x19c694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x19c698: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x19c698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x19c69c: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x19c69cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19c6a0: 0x10a3000e  beq         $a1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x19C6A0u;
    {
        const bool branch_taken_0x19c6a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x19C6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C6A0u;
        // 0x19c6a4: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c6a0) {
            ctx->pc = 0x19C6DCu;
            goto label_19c6dc;
        }
    }
    ctx->pc = 0x19C6A8u;
    // 0x19c6a8: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19C6A8u;
    {
        const bool branch_taken_0x19c6a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C6A8u;
        // 0x19c6ac: 0x861021  addu        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c6a8) {
            ctx->pc = 0x19C6C8u;
            goto label_19c6c8;
        }
    }
    ctx->pc = 0x19C6B0u;
    // 0x19c6b0: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x19c6b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19c6b4: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19C6B4u;
    {
        const bool branch_taken_0x19c6b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C6B4u;
        // 0x19c6b8: 0x51200  sll         $v0, $a1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c6b4) {
            ctx->pc = 0x19C6DCu;
            goto label_19c6dc;
        }
    }
    ctx->pc = 0x19C6BCu;
    // 0x19c6bc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x19C6BCu;
    {
        const bool branch_taken_0x19c6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C6BCu;
        // 0x19c6c0: 0x441821  addu        $v1, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c6bc) {
            ctx->pc = 0x19C6E4u;
            goto label_19c6e4;
        }
    }
    ctx->pc = 0x19C6C4u;
    // 0x19c6c4: 0x0  nop
    ctx->pc = 0x19c6c4u;
    // NOP
label_19c6c8:
    // 0x19c6c8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19c6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19c6cc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x19c6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19c6d0: 0x9042f2d8  lbu         $v0, -0xD28($v0)
    ctx->pc = 0x19c6d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294963928)));
    // 0x19c6d4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19C6D4u;
    {
        const bool branch_taken_0x19c6d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C6D4u;
        // 0x19c6d8: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c6d4) {
            ctx->pc = 0x19C6E4u;
            goto label_19c6e4;
        }
    }
    ctx->pc = 0x19C6DCu;
label_19c6dc:
    // 0x19c6dc: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x19c6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x19c6e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x19c6e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_19c6e4:
    // 0x19c6e4: 0x32a02  srl         $a1, $v1, 8
    ctx->pc = 0x19c6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x19c6e8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x19c6e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c6ec: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x19C6ECu;
    {
        const bool branch_taken_0x19c6ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C6ECu;
        // 0x19c6f0: 0x3064007f  andi        $a0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c6ec) {
            ctx->pc = 0x19C740u;
            goto label_19c740;
        }
    }
    ctx->pc = 0x19C6F4u;
    // 0x19c6f4: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x19c6f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x19c6f8: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x19c6f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x19c6fc: 0x90c6f3d8  lbu         $a2, -0xC28($a2)
    ctx->pc = 0x19c6fcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294964184)));
    // 0x19c700: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x19C700u;
    {
        const bool branch_taken_0x19c700 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C700u;
        // 0x19c704: 0x24830080  addiu       $v1, $a0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c700) {
            ctx->pc = 0x19C738u;
            goto label_19c738;
        }
    }
    ctx->pc = 0x19C708u;
    // 0x19c708: 0x38a20001  xori        $v0, $a1, 0x1
    ctx->pc = 0x19c708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x19c70c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19c70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19c710: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x19c710u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x19c714: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x19c714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x19c718: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x19c718u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x19c71c: 0x9024f4d8  lbu         $a0, -0xB28($at)
    ctx->pc = 0x19c71cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964440)));
    // 0x19c720: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x19C720u;
    {
        const bool branch_taken_0x19c720 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c720) {
            ctx->pc = 0x19C724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C720u;
            // 0x19c724: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C73Cu;
            goto label_19c73c;
        }
    }
    ctx->pc = 0x19C728u;
    // 0x19c728: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x19c728u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x19c72c: 0x3e00008  jr          $ra
    ctx->pc = 0x19C72Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C72Cu;
        // 0x19c730: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C72Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C734u;
    // 0x19c734: 0x0  nop
    ctx->pc = 0x19c734u;
    // NOP
label_19c738:
    // 0x19c738: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x19c738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_19c73c:
    // 0x19c73c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19c73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_19c740:
    // 0x19c740: 0x3e00008  jr          $ra
    ctx->pc = 0x19C740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C748u;
}
