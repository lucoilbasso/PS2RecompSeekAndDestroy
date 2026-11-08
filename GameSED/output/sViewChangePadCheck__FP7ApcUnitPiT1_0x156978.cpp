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

// Function: sViewChangePadCheck__FP7ApcUnitPiT1
// Address: 0x156978 - 0x156a1c
void sViewChangePadCheck__FP7ApcUnitPiT1_0x156978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sViewChangePadCheck__FP7ApcUnitPiT1_0x156978");
#endif

    switch (ctx->pc) {
        case 0x1569a0u: goto label_1569a0;
        case 0x1569c4u: goto label_1569c4;
        default: break;
    }

    ctx->pc = 0x156978u;

    // 0x156978: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x156978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15697c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x15697cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x156980: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x156980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x156984: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x156984u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156988: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x156988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15698c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x15698cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x156990: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x156990u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x156994: 0x8c9001ac  lw          $s0, 0x1AC($a0)
    ctx->pc = 0x156994u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 428)));
    // 0x156998: 0xc06a202  jal         func_1A8808
    ctx->pc = 0x156998u;
    SET_GPR_U32(ctx, 31, 0x1569A0u);
    ctx->pc = 0x15699Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156998u;
    // 0x15699c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x156998u, 0x1569A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1569A0u;
label_1569a0:
    // 0x1569a0: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1569A0u;
    {
        const bool branch_taken_0x1569a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1569a0) {
            ctx->pc = 0x1569A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1569A0u;
            // 0x1569a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156A08u;
            goto label_156a08;
        }
    }
    ctx->pc = 0x1569A8u;
    // 0x1569a8: 0x96020046  lhu         $v0, 0x46($s0)
    ctx->pc = 0x1569a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x1569ac: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x1569acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x1569b0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1569B0u;
    {
        const bool branch_taken_0x1569b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1569B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1569B0u;
        // 0x1569b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1569b0) {
            ctx->pc = 0x1569F0u;
            goto label_1569f0;
        }
    }
    ctx->pc = 0x1569B8u;
    // 0x1569b8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1569b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1569bc: 0xc06a202  jal         func_1A8808
    ctx->pc = 0x1569BCu;
    SET_GPR_U32(ctx, 31, 0x1569C4u);
    ctx->pc = 0x1569C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1569BCu;
    // 0x1569c0: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x1569BCu, 0x1569C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1569C4u;
label_1569c4:
    // 0x1569c4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1569C4u;
    {
        const bool branch_taken_0x1569c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1569C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1569C4u;
        // 0x1569c8: 0x2403ffdf  addiu       $v1, $zero, -0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1569c4) {
            ctx->pc = 0x156A04u;
            goto label_156a04;
        }
    }
    ctx->pc = 0x1569CCu;
    // 0x1569cc: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x1569ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x1569d0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1569d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1569d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1569d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1569d8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1569d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1569dc: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x1569dcu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1569e0: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x1569e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x1569e4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1569e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1569e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1569E8u;
    {
        const bool branch_taken_0x1569e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1569ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1569E8u;
        // 0x1569ec: 0xae440000  sw          $a0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1569e8) {
            ctx->pc = 0x156A04u;
            goto label_156a04;
        }
    }
    ctx->pc = 0x1569F0u;
label_1569f0:
    // 0x1569f0: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x1569f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1569f4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1569F4u;
    {
        const bool branch_taken_0x1569f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1569f4) {
            ctx->pc = 0x1569F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1569F4u;
            // 0x1569f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156A08u;
            goto label_156a08;
        }
    }
    ctx->pc = 0x1569FCu;
    // 0x1569fc: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x1569fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x156a00: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x156a00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_156a04:
    // 0x156a04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x156a04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_156a08:
    // 0x156a08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x156a08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x156a0c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x156a0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156a10: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x156a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x156a14: 0x3e00008  jr          $ra
    ctx->pc = 0x156A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156A14u;
        // 0x156a18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156A1Cu;
}
