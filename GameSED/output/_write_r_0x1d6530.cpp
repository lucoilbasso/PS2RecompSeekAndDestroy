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

// Function: _write_r
// Address: 0x1d6530 - 0x1d6590
void _write_r_0x1d6530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_write_r_0x1d6530");
#endif

    switch (ctx->pc) {
        case 0x1d6560u: goto label_1d6560;
        default: break;
    }

    ctx->pc = 0x1d6530u;

    // 0x1d6530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d6530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d6534: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1d6534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1d6538: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d6538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d653c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d653cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6540: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d6540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d6544: 0x2451da40  addiu       $s1, $v0, -0x25C0
    ctx->pc = 0x1d6544u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957632));
    // 0x1d6548: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d6548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d654c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d654cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6550: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1d6550u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6554: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d6554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d6558: 0xc06be8a  jal         func_1AFA28
    ctx->pc = 0x1D6558u;
    SET_GPR_U32(ctx, 31, 0x1D6560u);
    ctx->pc = 0x1D655Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6558u;
    // 0x1d655c: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFA28u, 0x1D6558u, 0x1D6560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6560u;
label_1d6560:
    // 0x1d6560: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1d6560u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6564: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1d6564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d6568: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D6568u;
    {
        const bool branch_taken_0x1d6568 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1D656Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6568u;
        // 0x1d656c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6568) {
            ctx->pc = 0x1D657Cu;
            goto label_1d657c;
        }
    }
    ctx->pc = 0x1D6570u;
    // 0x1d6570: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d6570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d6574: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D6574u;
    {
        const bool branch_taken_0x1d6574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6574) {
            ctx->pc = 0x1D6578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6574u;
            // 0x1d6578: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D657Cu;
            goto label_1d657c;
        }
    }
    ctx->pc = 0x1D657Cu;
label_1d657c:
    // 0x1d657c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d657cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6580: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d6580u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d6584: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d6584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6588: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6588u;
        // 0x1d658c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6590u;
}
