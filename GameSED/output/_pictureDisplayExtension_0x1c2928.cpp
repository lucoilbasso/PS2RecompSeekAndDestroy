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

// Function: _pictureDisplayExtension
// Address: 0x1c2928 - 0x1c2a1c
void _pictureDisplayExtension_0x1c2928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_pictureDisplayExtension_0x1c2928");
#endif

    switch (ctx->pc) {
        case 0x1c29a8u: goto label_1c29a8;
        case 0x1c29b0u: goto label_1c29b0;
        case 0x1c29c8u: goto label_1c29c8;
        case 0x1c29d8u: goto label_1c29d8;
        case 0x1c29ecu: goto label_1c29ec;
        default: break;
    }

    ctx->pc = 0x1c2928u;

    // 0x1c2928: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c2928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1c292c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1c292cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1c2930: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1c2930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1c2934: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c2934u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2938: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1c2938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1c293c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1c293cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1c2940: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1c2940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1c2944: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1c2944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1c2948: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c2948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c294c: 0x8e22013c  lw          $v0, 0x13C($s1)
    ctx->pc = 0x1c294cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
    // 0x1c2950: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C2950u;
    {
        const bool branch_taken_0x1c2950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2950) {
            ctx->pc = 0x1C2954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2950u;
            // 0x1c2954: 0x8e230174  lw          $v1, 0x174($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2974u;
            goto label_1c2974;
        }
    }
    ctx->pc = 0x1C2958u;
    // 0x1c2958: 0x8e220184  lw          $v0, 0x184($s1)
    ctx->pc = 0x1c2958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x1c295c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C295Cu;
    {
        const bool branch_taken_0x1c295c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C295Cu;
        // 0x1c2960: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c295c) {
            ctx->pc = 0x1C2980u;
            goto label_1c2980;
        }
    }
    ctx->pc = 0x1C2964u;
    // 0x1c2964: 0x8e230178  lw          $v1, 0x178($s1)
    ctx->pc = 0x1c2964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 376)));
    // 0x1c2968: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c2968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c296c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C296Cu;
    {
        const bool branch_taken_0x1c296c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C296Cu;
        // 0x1c2970: 0x43980b  movn        $s3, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c296c) {
            ctx->pc = 0x1C2990u;
            goto label_1c2990;
        }
    }
    ctx->pc = 0x1C2974u;
label_1c2974:
    // 0x1c2974: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c2974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c2978: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2978u;
    {
        const bool branch_taken_0x1c2978 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c2978) {
            ctx->pc = 0x1C297Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2978u;
            // 0x1c297c: 0x8e220184  lw          $v0, 0x184($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2988u;
            goto label_1c2988;
        }
    }
    ctx->pc = 0x1C2980u;
label_1c2980:
    // 0x1c2980: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2980u;
    {
        const bool branch_taken_0x1c2980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2980u;
        // 0x1c2984: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2980) {
            ctx->pc = 0x1C2990u;
            goto label_1c2990;
        }
    }
    ctx->pc = 0x1C2988u;
label_1c2988:
    // 0x1c2988: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x1c2988u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c298c: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x1c298cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_1c2990:
    // 0x1c2990: 0x1a600019  blez        $s3, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C2990u;
    {
        const bool branch_taken_0x1c2990 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1C2994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2990u;
        // 0x1c2994: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2990) {
            ctx->pc = 0x1C29F8u;
            goto label_1c29f8;
        }
    }
    ctx->pc = 0x1C2998u;
    // 0x1c2998: 0x2635018c  addiu       $s5, $s1, 0x18C
    ctx->pc = 0x1c2998u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 396));
    // 0x1c299c: 0x26340198  addiu       $s4, $s1, 0x198
    ctx->pc = 0x1c299cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 408));
    // 0x1c29a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c29a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c29a4: 0x0  nop
    ctx->pc = 0x1c29a4u;
    // NOP
label_1c29a8:
    // 0x1c29a8: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C29A8u;
    SET_GPR_U32(ctx, 31, 0x1C29B0u);
    ctx->pc = 0x1C29ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C29A8u;
    // 0x1c29ac: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C29A8u, 0x1C29B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C29B0u;
label_1c29b0:
    // 0x1c29b0: 0x128080  sll         $s0, $s2, 2
    ctx->pc = 0x1c29b0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1c29b4: 0x2b01821  addu        $v1, $s5, $s0
    ctx->pc = 0x1c29b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x1c29b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c29b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c29bc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1c29bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1c29c0: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C29C0u;
    SET_GPR_U32(ctx, 31, 0x1C29C8u);
    ctx->pc = 0x1C29C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C29C0u;
    // 0x1c29c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C29C0u, 0x1C29C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C29C8u;
label_1c29c8:
    // 0x1c29c8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c29c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1c29cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c29ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c29d0: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C29D0u;
    SET_GPR_U32(ctx, 31, 0x1C29D8u);
    ctx->pc = 0x1C29D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C29D0u;
    // 0x1c29d4: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C29D0u, 0x1C29D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C29D8u;
label_1c29d8:
    // 0x1c29d8: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x1c29d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x1c29dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c29dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c29e0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1c29e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1c29e4: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C29E4u;
    SET_GPR_U32(ctx, 31, 0x1C29ECu);
    ctx->pc = 0x1C29E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C29E4u;
    // 0x1c29e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C29E4u, 0x1C29ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C29ECu;
label_1c29ec:
    // 0x1c29ec: 0x253182a  slt         $v1, $s2, $s3
    ctx->pc = 0x1c29ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1c29f0: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1C29F0u;
    {
        const bool branch_taken_0x1c29f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C29F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C29F0u;
        // 0x1c29f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c29f0) {
            ctx->pc = 0x1C29A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c29a8;
        }
    }
    ctx->pc = 0x1C29F8u;
label_1c29f8:
    // 0x1c29f8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1c29f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c29fc: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1c29fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c2a00: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1c2a00u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c2a04: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1c2a04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c2a08: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c2a08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c2a0c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1c2a0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2a10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c2a10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2a14: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2A14u;
        // 0x1c2a18: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2A1Cu;
}
