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

// Function: GetWorldPosition__8WcEntity
// Address: 0x1dd148 - 0x1dd1dc
void GetWorldPosition__8WcEntity_0x1dd148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetWorldPosition__8WcEntity_0x1dd148");
#endif

    switch (ctx->pc) {
        case 0x1dd180u: goto label_1dd180;
        case 0x1dd1a8u: goto label_1dd1a8;
        case 0x1dd1b0u: goto label_1dd1b0;
        case 0x1dd1c0u: goto label_1dd1c0;
        default: break;
    }

    ctx->pc = 0x1dd148u;

    // 0x1dd148: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dd148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dd14c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dd14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dd150: 0x3410e000  ori         $s0, $zero, 0xE000
    ctx->pc = 0x1dd150u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x1dd154: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dd154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dd158: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dd158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dd15c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1dd15cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd160: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1dd160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1dd164: 0x26510020  addiu       $s1, $s2, 0x20
    ctx->pc = 0x1dd164u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1dd168: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x1dd168u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1dd16c: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x1dd16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x1dd170: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1DD170u;
    {
        const bool branch_taken_0x1dd170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd170) {
            ctx->pc = 0x1DD1B8u;
            goto label_1dd1b8;
        }
    }
    ctx->pc = 0x1DD178u;
    // 0x1dd178: 0xc061390  jal         func_184E40
    ctx->pc = 0x1DD178u;
    SET_GPR_U32(ctx, 31, 0x1DD180u);
    ctx->pc = 0x1DD17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD178u;
    // 0x1dd17c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184E40u, 0x1DD178u, 0x1DD180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD180u;
label_1dd180:
    // 0x1dd180: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x1dd180u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1dd184: 0x701024  and         $v0, $v1, $s0
    ctx->pc = 0x1dd184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x1dd188: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1DD188u;
    {
        const bool branch_taken_0x1dd188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD188u;
        // 0x1dd18c: 0x30621fff  andi        $v0, $v1, 0x1FFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd188) {
            ctx->pc = 0x1DD1B8u;
            goto label_1dd1b8;
        }
    }
    ctx->pc = 0x1DD190u;
    // 0x1dd190: 0x8e500018  lw          $s0, 0x18($s2)
    ctx->pc = 0x1dd190u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1dd194: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x1dd194u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1dd198: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x1dd198u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1dd19c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DD19Cu;
    {
        const bool branch_taken_0x1dd19c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD19Cu;
        // 0x1dd1a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd19c) {
            ctx->pc = 0x1DD1B8u;
            goto label_1dd1b8;
        }
    }
    ctx->pc = 0x1DD1A4u;
    // 0x1dd1a4: 0x0  nop
    ctx->pc = 0x1dd1a4u;
    // NOP
label_1dd1a8:
    // 0x1dd1a8: 0xc061934  jal         func_1864D0
    ctx->pc = 0x1DD1A8u;
    SET_GPR_U32(ctx, 31, 0x1DD1B0u);
    ctx->pc = 0x1DD1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD1A8u;
    // 0x1dd1ac: 0x8c90001c  lw          $s0, 0x1C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1864D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1864D0u, 0x1DD1A8u, 0x1DD1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD1B0u;
label_1dd1b0:
    // 0x1dd1b0: 0x1600fffd  bnez        $s0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x1DD1B0u;
    {
        const bool branch_taken_0x1dd1b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD1B0u;
        // 0x1dd1b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd1b0) {
            ctx->pc = 0x1DD1A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd1a8;
        }
    }
    ctx->pc = 0x1DD1B8u;
label_1dd1b8:
    // 0x1dd1b8: 0xc061422  jal         func_185088
    ctx->pc = 0x1DD1B8u;
    SET_GPR_U32(ctx, 31, 0x1DD1C0u);
    ctx->pc = 0x1DD1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD1B8u;
    // 0x1dd1bc: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x1DD1B8u, 0x1DD1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD1C0u;
label_1dd1c0:
    // 0x1dd1c0: 0x26420110  addiu       $v0, $s2, 0x110
    ctx->pc = 0x1dd1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
    // 0x1dd1c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dd1c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd1c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dd1c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dd1cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dd1ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd1d0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1dd1d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dd1d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD1D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD1D4u;
        // 0x1dd1d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD1D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD1DCu;
}
