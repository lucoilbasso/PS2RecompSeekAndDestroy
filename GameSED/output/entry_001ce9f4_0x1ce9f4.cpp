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

// Function: entry_001ce9f4
// Address: 0x1ce9f4 - 0x1cea84
void entry_001ce9f4_0x1ce9f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce9f4_0x1ce9f4");
#endif

    switch (ctx->pc) {
        case 0x1cea28u: goto label_1cea28;
        case 0x1cea38u: goto label_1cea38;
        case 0x1cea44u: goto label_1cea44;
        case 0x1cea7cu: goto label_1cea7c;
        default: break;
    }

    ctx->pc = 0x1ce9f4u;

    // 0x1ce9f4: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x1ce9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x1ce9f8: 0x32560001  andi        $s6, $s2, 0x1
    ctx->pc = 0x1ce9f8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x1ce9fc: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x1ce9fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1cea00: 0x144000be  bnez        $v0, . + 4 + (0xBE << 2)
    ctx->pc = 0x1CEA00u;
    {
        const bool branch_taken_0x1cea00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CEA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEA00u;
        // 0x1cea04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cea00) {
            ctx->pc = 0x1CECFCu;
            return;
        }
    }
    ctx->pc = 0x1CEA08u;
    // 0x1cea08: 0x32630002  andi        $v1, $s3, 0x2
    ctx->pc = 0x1cea08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
    // 0x1cea0c: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x1cea0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
    // 0x1cea10: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1cea10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1cea14: 0x544000b9  bnel        $v0, $zero, . + 4 + (0xB9 << 2)
    ctx->pc = 0x1CEA14u;
    {
        const bool branch_taken_0x1cea14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cea14) {
            ctx->pc = 0x1CEA18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CEA14u;
            // 0x1cea18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CECFCu;
            return;
        }
    }
    ctx->pc = 0x1CEA1Cu;
    // 0x1cea1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cea1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cea20: 0xc072f28  jal         func_1CBCA0
    ctx->pc = 0x1CEA20u;
    SET_GPR_U32(ctx, 31, 0x1CEA28u);
    ctx->pc = 0x1CEA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEA20u;
    // 0x1cea24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBCA0u, 0x1CEA20u, 0x1CEA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEA28u;
label_1cea28:
    // 0x1cea28: 0x144000b4  bnez        $v0, . + 4 + (0xB4 << 2)
    ctx->pc = 0x1CEA28u;
    {
        const bool branch_taken_0x1cea28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CEA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEA28u;
        // 0x1cea2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cea28) {
            ctx->pc = 0x1CECFCu;
            return;
        }
    }
    ctx->pc = 0x1CEA30u;
    // 0x1cea30: 0xc073be2  jal         func_1CEF88
    ctx->pc = 0x1CEA30u;
    SET_GPR_U32(ctx, 31, 0x1CEA38u);
    ctx->pc = 0x1CEF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF88u, 0x1CEA30u, 0x1CEA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEA38u;
label_1cea38:
    // 0x1cea38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cea38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cea3c: 0xc072f28  jal         func_1CBCA0
    ctx->pc = 0x1CEA3Cu;
    SET_GPR_U32(ctx, 31, 0x1CEA44u);
    ctx->pc = 0x1CEA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEA3Cu;
    // 0x1cea40: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBCA0u, 0x1CEA3Cu, 0x1CEA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEA44u;
label_1cea44:
    // 0x1cea44: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1CEA44u;
    {
        const bool branch_taken_0x1cea44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cea44) {
            ctx->pc = 0x1CEA84u;
            return;
        }
    }
    ctx->pc = 0x1CEA4Cu;
    // 0x1cea4c: 0x1200004e  beqz        $s0, . + 4 + (0x4E << 2)
    ctx->pc = 0x1CEA4Cu;
    {
        const bool branch_taken_0x1cea4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEA4Cu;
        // 0x1cea50: 0x3c05001e  lui         $a1, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cea4c) {
            ctx->pc = 0x1CEB88u;
            return;
        }
    }
    ctx->pc = 0x1CEA54u;
    // 0x1cea54: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1cea54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1cea58: 0x3c08001e  lui         $t0, 0x1E
    ctx->pc = 0x1cea58u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)30 << 16));
    // 0x1cea5c: 0x24a52010  addiu       $a1, $a1, 0x2010
    ctx->pc = 0x1cea5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8208));
    // 0x1cea60: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x1cea60u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cea64: 0x25081780  addiu       $t0, $t0, 0x1780
    ctx->pc = 0x1cea64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6016));
    // 0x1cea68: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1cea68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1cea6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cea6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cea70: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x1cea70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x1cea74: 0xc073bbe  jal         func_1CEEF8
    ctx->pc = 0x1CEA74u;
    SET_GPR_U32(ctx, 31, 0x1CEA7Cu);
    ctx->pc = 0x1CEA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEA74u;
    // 0x1cea78: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEEF8u, 0x1CEA74u, 0x1CEA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEA7Cu;
label_1cea7c:
    // 0x1cea7c: 0x1040009f  beqz        $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x1CEA7Cu;
    {
        const bool branch_taken_0x1cea7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEA7Cu;
        // 0x1cea80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cea7c) {
            ctx->pc = 0x1CECFCu;
            return;
        }
    }
    ctx->pc = 0x1CEA84u;
}
