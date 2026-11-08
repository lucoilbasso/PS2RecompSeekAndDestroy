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

// Function: _setDefaultQM
// Address: 0x1be8a8 - 0x1be988
void _setDefaultQM_0x1be8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_setDefaultQM_0x1be8a8");
#endif

    switch (ctx->pc) {
        case 0x1be8dcu: goto label_1be8dc;
        case 0x1be8e4u: goto label_1be8e4;
        case 0x1be8f8u: goto label_1be8f8;
        case 0x1be900u: goto label_1be900;
        case 0x1be948u: goto label_1be948;
        case 0x1be954u: goto label_1be954;
        case 0x1be95cu: goto label_1be95c;
        case 0x1be970u: goto label_1be970;
        default: break;
    }

    ctx->pc = 0x1be8a8u;

    // 0x1be8a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1be8a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1be8ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1be8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1be8b0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1be8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1be8b4: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x1be8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x1be8b8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1be8b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be8bc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1be8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1be8c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1be8c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be8c4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1be8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1be8c8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1be8c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be8cc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1be8ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be8d0: 0x8e240858  lw          $a0, 0x858($s1)
    ctx->pc = 0x1be8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
    // 0x1be8d4: 0xc06f684  jal         func_1BDA10
    ctx->pc = 0x1BE8D4u;
    SET_GPR_U32(ctx, 31, 0x1BE8DCu);
    ctx->pc = 0x1BE8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE8D4u;
    // 0x1be8d8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDA10u, 0x1BE8D4u, 0x1BE8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE8DCu;
label_1be8dc:
    // 0x1be8dc: 0xc0706c4  jal         func_1C1B10
    ctx->pc = 0x1BE8DCu;
    SET_GPR_U32(ctx, 31, 0x1BE8E4u);
    ctx->pc = 0x1BE8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE8DCu;
    // 0x1be8e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1B10u, 0x1BE8DCu, 0x1BE8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE8E4u;
label_1be8e4:
    // 0x1be8e4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1be8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1be8e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1be8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be8ec: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1be8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1be8f0: 0xc0706c4  jal         func_1C1B10
    ctx->pc = 0x1BE8F0u;
    SET_GPR_U32(ctx, 31, 0x1BE8F8u);
    ctx->pc = 0x1BE8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE8F0u;
    // 0x1be8f4: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1B10u, 0x1BE8F0u, 0x1BE8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE8F8u;
label_1be8f8:
    // 0x1be8f8: 0xc06dae8  jal         func_1B6BA0
    ctx->pc = 0x1BE8F8u;
    SET_GPR_U32(ctx, 31, 0x1BE900u);
    ctx->pc = 0x1B6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BA0u, 0x1BE8F8u, 0x1BE900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE900u;
label_1be900:
    // 0x1be900: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x1be900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x1be904: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1be904u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1be908: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1be908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1be90c: 0x3484b410  ori         $a0, $a0, 0xB410
    ctx->pc = 0x1be90cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46096);
    // 0x1be910: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x1be910u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x1be914: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1be914u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1be918: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x1be918u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x1be91c: 0x34a5b420  ori         $a1, $a1, 0xB420
    ctx->pc = 0x1be91cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46112);
    // 0x1be920: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1be920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1be924: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1be924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1be928: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1be928u;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 4));
    // 0x1be92c: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x1be92cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46080);
    // 0x1be930: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x1be930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x1be934: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1be934u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 4));
    // 0x1be938: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE938u;
    {
        const bool branch_taken_0x1be938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be938) {
            ctx->pc = 0x1BE93Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BE938u;
            // 0x1be93c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BE94Cu;
            goto label_1be94c;
        }
    }
    ctx->pc = 0x1BE940u;
    // 0x1be940: 0xc06dafa  jal         func_1B6BE8
    ctx->pc = 0x1BE940u;
    SET_GPR_U32(ctx, 31, 0x1BE948u);
    ctx->pc = 0x1B6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BE8u, 0x1BE940u, 0x1BE948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE948u;
label_1be948:
    // 0x1be948: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1be948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1be94c:
    // 0x1be94c: 0xc0706b8  jal         func_1C1AE0
    ctx->pc = 0x1BE94Cu;
    SET_GPR_U32(ctx, 31, 0x1BE954u);
    ctx->pc = 0x1BE950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE94Cu;
    // 0x1be950: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1AE0u, 0x1BE94Cu, 0x1BE954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE954u;
label_1be954:
    // 0x1be954: 0xc0706c4  jal         func_1C1B10
    ctx->pc = 0x1BE954u;
    SET_GPR_U32(ctx, 31, 0x1BE95Cu);
    ctx->pc = 0x1BE958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE954u;
    // 0x1be958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1B10u, 0x1BE954u, 0x1BE95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE95Cu;
label_1be95c:
    // 0x1be95c: 0x8e240858  lw          $a0, 0x858($s1)
    ctx->pc = 0x1be95cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
    // 0x1be960: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1be960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1be964: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1be964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1be968: 0xc06f684  jal         func_1BDA10
    ctx->pc = 0x1BE968u;
    SET_GPR_U32(ctx, 31, 0x1BE970u);
    ctx->pc = 0x1BE96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE968u;
    // 0x1be96c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDA10u, 0x1BE968u, 0x1BE970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE970u;
label_1be970:
    // 0x1be970: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1be970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1be974: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1be974u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1be978: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1be978u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1be97c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1be97cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1be980: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE980u;
        // 0x1be984: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE988u;
}
