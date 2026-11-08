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

// Function: Init__8ApcMovieP9ApcStudioPci
// Address: 0x16fd70 - 0x16fe14
void Init__8ApcMovieP9ApcStudioPci_0x16fd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__8ApcMovieP9ApcStudioPci_0x16fd70");
#endif

    switch (ctx->pc) {
        case 0x16fd9cu: goto label_16fd9c;
        case 0x16fdd4u: goto label_16fdd4;
        case 0x16fde0u: goto label_16fde0;
        case 0x16fdf0u: goto label_16fdf0;
        default: break;
    }

    ctx->pc = 0x16fd70u;

    // 0x16fd70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16fd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16fd74: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16fd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16fd78: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x16fd78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fd7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16fd7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16fd80: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x16fd80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fd84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16fd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16fd88: 0x26710080  addiu       $s1, $s3, 0x80
    ctx->pc = 0x16fd88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x16fd8c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16fd8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16fd90: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16fd90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16fd94: 0xc066546  jal         func_199518
    ctx->pc = 0x16FD94u;
    SET_GPR_U32(ctx, 31, 0x16FD9Cu);
    ctx->pc = 0x16FD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FD94u;
    // 0x16fd98: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199518u, 0x16FD94u, 0x16FD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FD9Cu;
label_16fd9c:
    // 0x16fd9c: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x16fd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x16fda0: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x16fda0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x16fda4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x16fda4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x16fda8: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x16fda8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x16fdac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16fdacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fdb0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16FDB0u;
    {
        const bool branch_taken_0x16fdb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FDB0u;
        // 0x16fdb4: 0x24a5d430  addiu       $a1, $a1, -0x2BD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fdb0) {
            ctx->pc = 0x16FDC4u;
            goto label_16fdc4;
        }
    }
    ctx->pc = 0x16FDB8u;
    // 0x16fdb8: 0x3c120021  lui         $s2, 0x21
    ctx->pc = 0x16fdb8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)33 << 16));
    // 0x16fdbc: 0x2652d570  addiu       $s2, $s2, -0x2A90
    ctx->pc = 0x16fdbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956400));
    // 0x16fdc0: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x16fdc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_16fdc4:
    // 0x16fdc4: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x16FDC4u;
    {
        const bool branch_taken_0x16fdc4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FDC4u;
        // 0x16fdc8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fdc4) {
            ctx->pc = 0x16FDFCu;
            goto label_16fdfc;
        }
    }
    ctx->pc = 0x16FDCCu;
    // 0x16fdcc: 0xc0671e8  jal         func_19C7A0
    ctx->pc = 0x16FDCCu;
    SET_GPR_U32(ctx, 31, 0x16FDD4u);
    ctx->pc = 0x19C7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C7A0u, 0x16FDCCu, 0x16FDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FDD4u;
label_16fdd4:
    // 0x16fdd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16fdd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fdd8: 0xc0671f6  jal         func_19C7D8
    ctx->pc = 0x16FDD8u;
    SET_GPR_U32(ctx, 31, 0x16FDE0u);
    ctx->pc = 0x16FDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FDD8u;
    // 0x16fddc: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C7D8u, 0x16FDD8u, 0x16FDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FDE0u;
label_16fde0:
    // 0x16fde0: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x16fde0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x16fde4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16fde4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fde8: 0xc0671f6  jal         func_19C7D8
    ctx->pc = 0x16FDE8u;
    SET_GPR_U32(ctx, 31, 0x16FDF0u);
    ctx->pc = 0x16FDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FDE8u;
    // 0x16fdec: 0x24a5d438  addiu       $a1, $a1, -0x2BC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C7D8u, 0x16FDE8u, 0x16FDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FDF0u;
label_16fdf0:
    // 0x16fdf0: 0x96430002  lhu         $v1, 0x2($s2)
    ctx->pc = 0x16fdf0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x16fdf4: 0xae630180  sw          $v1, 0x180($s3)
    ctx->pc = 0x16fdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 384), GPR_U32(ctx, 3));
    // 0x16fdf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16fdf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16fdfc:
    // 0x16fdfc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16fdfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16fe00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16fe00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16fe04: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16fe04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16fe08: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16fe08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16fe0c: 0x3e00008  jr          $ra
    ctx->pc = 0x16FE0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FE0Cu;
        // 0x16fe10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FE0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FE14u;
}
