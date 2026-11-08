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

// Function: HandleEvent__8ApcFieldP5BcObji
// Address: 0x13e908 - 0x13e9c4
void HandleEvent__8ApcFieldP5BcObji_0x13e908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("HandleEvent__8ApcFieldP5BcObji_0x13e908");
#endif

    switch (ctx->pc) {
        case 0x13e92cu: goto label_13e92c;
        case 0x13e964u: goto label_13e964;
        case 0x13e998u: goto label_13e998;
        default: break;
    }

    ctx->pc = 0x13e908u;

    // 0x13e908: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13e908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13e90c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13e90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13e910: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13e910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e914: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13e914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13e918: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x13e918u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e91c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13e91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13e920: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x13e920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x13e924: 0xc06851a  jal         func_1A1468
    ctx->pc = 0x13E924u;
    SET_GPR_U32(ctx, 31, 0x13E92Cu);
    ctx->pc = 0x13E928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E924u;
    // 0x13e928: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1468u, 0x13E924u, 0x13E92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E92Cu;
label_13e92c:
    // 0x13e92c: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x13e92cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13e930: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x13e930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x13e934: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x13E934u;
    {
        const bool branch_taken_0x13e934 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13E938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E934u;
        // 0x13e938: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e934) {
            ctx->pc = 0x13E9ACu;
            goto label_13e9ac;
        }
    }
    ctx->pc = 0x13E93Cu;
    // 0x13e93c: 0x5624001c  bnel        $s1, $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x13E93Cu;
    {
        const bool branch_taken_0x13e93c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 4));
        if (branch_taken_0x13e93c) {
            ctx->pc = 0x13E940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E93Cu;
            // 0x13e940: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13E9B0u;
            goto label_13e9b0;
        }
    }
    ctx->pc = 0x13E944u;
    // 0x13e944: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x13e944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13e948: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x13e948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x13e94c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13e94cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13e950: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x13E950u;
    {
        const bool branch_taken_0x13e950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e950) {
            ctx->pc = 0x13E954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E950u;
            // 0x13e954: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13E97Cu;
            goto label_13e97c;
        }
    }
    ctx->pc = 0x13E958u;
    // 0x13e958: 0x264401fc  addiu       $a0, $s2, 0x1FC
    ctx->pc = 0x13e958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 508));
    // 0x13e95c: 0xc068436  jal         func_1A10D8
    ctx->pc = 0x13E95Cu;
    SET_GPR_U32(ctx, 31, 0x13E964u);
    ctx->pc = 0x13E960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E95Cu;
    // 0x13e960: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A10D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A10D8u, 0x13E95Cu, 0x13E964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E964u;
label_13e964:
    // 0x13e964: 0x3c02ffef  lui         $v0, 0xFFEF
    ctx->pc = 0x13e964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65519 << 16));
    // 0x13e968: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x13e968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13e96c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x13e96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x13e970: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x13e970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13e974: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x13e974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x13e978: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x13e978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_13e97c:
    // 0x13e97c: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x13e97cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x13e980: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13e980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13e984: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x13E984u;
    {
        const bool branch_taken_0x13e984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e984) {
            ctx->pc = 0x13E988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E984u;
            // 0x13e988: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13E9B0u;
            goto label_13e9b0;
        }
    }
    ctx->pc = 0x13E98Cu;
    // 0x13e98c: 0x26440200  addiu       $a0, $s2, 0x200
    ctx->pc = 0x13e98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
    // 0x13e990: 0xc068436  jal         func_1A10D8
    ctx->pc = 0x13E990u;
    SET_GPR_U32(ctx, 31, 0x13E998u);
    ctx->pc = 0x13E994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E990u;
    // 0x13e994: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A10D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A10D8u, 0x13E990u, 0x13E998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E998u;
label_13e998:
    // 0x13e998: 0x3c02fff7  lui         $v0, 0xFFF7
    ctx->pc = 0x13e998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65527 << 16));
    // 0x13e99c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x13e99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13e9a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x13e9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x13e9a4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x13e9a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13e9a8: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x13e9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_13e9ac:
    // 0x13e9ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13e9acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13e9b0:
    // 0x13e9b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13e9b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13e9b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13e9b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e9b8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x13e9b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13e9bc: 0x3e00008  jr          $ra
    ctx->pc = 0x13E9BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E9BCu;
        // 0x13e9c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E9BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E9C4u;
}
