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

// Function: ApUnitInqOptionSound__FP7ApcUniti
// Address: 0x14cbc8 - 0x14cc40
void ApUnitInqOptionSound__FP7ApcUniti_0x14cbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApUnitInqOptionSound__FP7ApcUniti_0x14cbc8");
#endif

    switch (ctx->pc) {
        case 0x14cbf8u: goto label_14cbf8;
        case 0x14cc20u: goto label_14cc20;
        default: break;
    }

    ctx->pc = 0x14cbc8u;

    // 0x14cbc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14cbc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14cbcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14cbccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14cbd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14cbd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cbd4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14cbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14cbd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14cbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14cbdc: 0x8e0201c0  lw          $v0, 0x1C0($s0)
    ctx->pc = 0x14cbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x14cbe0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14CBE0u;
    {
        const bool branch_taken_0x14cbe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14CBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CBE0u;
        // 0x14cbe4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cbe0) {
            ctx->pc = 0x14CC00u;
            goto label_14cc00;
        }
    }
    ctx->pc = 0x14CBE8u;
    // 0x14cbe8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x14cbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x14cbec: 0x24060041  addiu       $a2, $zero, 0x41
    ctx->pc = 0x14cbecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x14cbf0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14CBF0u;
    SET_GPR_U32(ctx, 31, 0x14CBF8u);
    ctx->pc = 0x14CBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CBF0u;
    // 0x14cbf4: 0x24a56bd8  addiu       $a1, $a1, 0x6BD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14CBF0u, 0x14CBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CBF8u;
label_14cbf8:
    // 0x14cbf8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x14CBF8u;
    {
        const bool branch_taken_0x14cbf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CBF8u;
        // 0x14cbfc: 0x8e0301c0  lw          $v1, 0x1C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cbf8) {
            ctx->pc = 0x14CC24u;
            goto label_14cc24;
        }
    }
    ctx->pc = 0x14CC00u;
label_14cc00:
    // 0x14cc00: 0x920201ab  lbu         $v0, 0x1AB($s0)
    ctx->pc = 0x14cc00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 427)));
    // 0x14cc04: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x14cc04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14cc08: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x14CC08u;
    {
        const bool branch_taken_0x14cc08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14cc08) {
            ctx->pc = 0x14CC0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14CC08u;
            // 0x14cc0c: 0x8e0301c0  lw          $v1, 0x1C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14CC24u;
            goto label_14cc24;
        }
    }
    ctx->pc = 0x14CC10u;
    // 0x14cc10: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x14cc10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x14cc14: 0x2406003b  addiu       $a2, $zero, 0x3B
    ctx->pc = 0x14cc14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x14cc18: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14CC18u;
    SET_GPR_U32(ctx, 31, 0x14CC20u);
    ctx->pc = 0x14CC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CC18u;
    // 0x14cc1c: 0x24a56bd8  addiu       $a1, $a1, 0x6BD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14CC18u, 0x14CC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CC20u;
label_14cc20:
    // 0x14cc20: 0x8e0301c0  lw          $v1, 0x1C0($s0)
    ctx->pc = 0x14cc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
label_14cc24:
    // 0x14cc24: 0x111140  sll         $v0, $s1, 5
    ctx->pc = 0x14cc24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x14cc28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14cc28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14cc2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14cc2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14cc30: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x14cc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14cc34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14cc34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14cc38: 0x3e00008  jr          $ra
    ctx->pc = 0x14CC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CC38u;
        // 0x14cc3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CC38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14CC40u;
}
