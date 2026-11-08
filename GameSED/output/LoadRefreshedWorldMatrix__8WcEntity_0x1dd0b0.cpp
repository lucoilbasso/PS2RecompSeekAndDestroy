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

// Function: LoadRefreshedWorldMatrix__8WcEntity
// Address: 0x1dd0b0 - 0x1dd144
void LoadRefreshedWorldMatrix__8WcEntity_0x1dd0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadRefreshedWorldMatrix__8WcEntity_0x1dd0b0");
#endif

    switch (ctx->pc) {
        case 0x1dd0e8u: goto label_1dd0e8;
        case 0x1dd110u: goto label_1dd110;
        case 0x1dd118u: goto label_1dd118;
        case 0x1dd128u: goto label_1dd128;
        default: break;
    }

    ctx->pc = 0x1dd0b0u;

    // 0x1dd0b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dd0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dd0b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dd0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dd0b8: 0x3410e000  ori         $s0, $zero, 0xE000
    ctx->pc = 0x1dd0b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x1dd0bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dd0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dd0c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dd0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dd0c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1dd0c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd0c8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1dd0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1dd0cc: 0x26510020  addiu       $s1, $s2, 0x20
    ctx->pc = 0x1dd0ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1dd0d0: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x1dd0d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1dd0d4: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x1dd0d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x1dd0d8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1DD0D8u;
    {
        const bool branch_taken_0x1dd0d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd0d8) {
            ctx->pc = 0x1DD120u;
            goto label_1dd120;
        }
    }
    ctx->pc = 0x1DD0E0u;
    // 0x1dd0e0: 0xc061390  jal         func_184E40
    ctx->pc = 0x1DD0E0u;
    SET_GPR_U32(ctx, 31, 0x1DD0E8u);
    ctx->pc = 0x1DD0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD0E0u;
    // 0x1dd0e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184E40u, 0x1DD0E0u, 0x1DD0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD0E8u;
label_1dd0e8:
    // 0x1dd0e8: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x1dd0e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1dd0ec: 0x701024  and         $v0, $v1, $s0
    ctx->pc = 0x1dd0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x1dd0f0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1DD0F0u;
    {
        const bool branch_taken_0x1dd0f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD0F0u;
        // 0x1dd0f4: 0x30621fff  andi        $v0, $v1, 0x1FFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd0f0) {
            ctx->pc = 0x1DD120u;
            goto label_1dd120;
        }
    }
    ctx->pc = 0x1DD0F8u;
    // 0x1dd0f8: 0x8e500018  lw          $s0, 0x18($s2)
    ctx->pc = 0x1dd0f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1dd0fc: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x1dd0fcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1dd100: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x1dd100u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1dd104: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DD104u;
    {
        const bool branch_taken_0x1dd104 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD104u;
        // 0x1dd108: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd104) {
            ctx->pc = 0x1DD120u;
            goto label_1dd120;
        }
    }
    ctx->pc = 0x1DD10Cu;
    // 0x1dd10c: 0x0  nop
    ctx->pc = 0x1dd10cu;
    // NOP
label_1dd110:
    // 0x1dd110: 0xc061934  jal         func_1864D0
    ctx->pc = 0x1DD110u;
    SET_GPR_U32(ctx, 31, 0x1DD118u);
    ctx->pc = 0x1DD114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD110u;
    // 0x1dd114: 0x8c90001c  lw          $s0, 0x1C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1864D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1864D0u, 0x1DD110u, 0x1DD118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD118u;
label_1dd118:
    // 0x1dd118: 0x1600fffd  bnez        $s0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x1DD118u;
    {
        const bool branch_taken_0x1dd118 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD118u;
        // 0x1dd11c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd118) {
            ctx->pc = 0x1DD110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd110;
        }
    }
    ctx->pc = 0x1DD120u;
label_1dd120:
    // 0x1dd120: 0xc061422  jal         func_185088
    ctx->pc = 0x1DD120u;
    SET_GPR_U32(ctx, 31, 0x1DD128u);
    ctx->pc = 0x1DD124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD120u;
    // 0x1dd124: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x1DD120u, 0x1DD128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD128u;
label_1dd128:
    // 0x1dd128: 0x264200e0  addiu       $v0, $s2, 0xE0
    ctx->pc = 0x1dd128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
    // 0x1dd12c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dd12cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd130: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dd130u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dd134: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dd134u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd138: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1dd138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dd13c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD13Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD13Cu;
        // 0x1dd140: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD13Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD144u;
}
