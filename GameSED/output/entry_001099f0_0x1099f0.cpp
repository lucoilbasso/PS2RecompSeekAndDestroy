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

// Function: entry_001099f0
// Address: 0x1099f0 - 0x109a40
void entry_001099f0_0x1099f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001099f0_0x1099f0");
#endif

    switch (ctx->pc) {
        case 0x109a04u: goto label_109a04;
        case 0x109a20u: goto label_109a20;
        case 0x109a34u: goto label_109a34;
        default: break;
    }

    ctx->pc = 0x1099f0u;

    // 0x1099f0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1099f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1099f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1099f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1099f8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1099f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1099fc: 0xc04110c  jal         func_104430
    ctx->pc = 0x1099FCu;
    SET_GPR_U32(ctx, 31, 0x109A04u);
    ctx->pc = 0x109A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1099FCu;
    // 0x109a00: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x1099FCu, 0x109A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109A04u;
label_109a04:
    // 0x109a04: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x109a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x109a08: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x109a08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109a0c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x109a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x109a10: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x109A10u;
    {
        const bool branch_taken_0x109a10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x109a10) {
            ctx->pc = 0x109A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109A10u;
            // 0x109a14: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109A40u;
            return;
        }
    }
    ctx->pc = 0x109A18u;
    // 0x109a18: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x109A18u;
    SET_GPR_U32(ctx, 31, 0x109A20u);
    ctx->pc = 0x109A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109A18u;
    // 0x109a1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x109A18u, 0x109A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109A20u;
label_109a20:
    // 0x109a20: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x109a20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x109a24: 0x8c66b830  lw          $a2, -0x47D0($v1)
    ctx->pc = 0x109a24u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x1FB830u));
    // 0x109a28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x109a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109a2c: 0xc0640ca  jal         func_190328
    ctx->pc = 0x109A2Cu;
    SET_GPR_U32(ctx, 31, 0x109A34u);
    ctx->pc = 0x109A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109A2Cu;
    // 0x109a30: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190328u, 0x109A2Cu, 0x109A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109A34u;
label_109a34:
    // 0x109a34: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x109A34u;
    {
        const bool branch_taken_0x109a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109A34u;
        // 0x109a38: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109a34) {
            ctx->pc = 0x109AACu;
            return;
        }
    }
    ctx->pc = 0x109A3Cu;
    // 0x109a3c: 0x0  nop
    ctx->pc = 0x109a3cu;
    // NOP
    ctx->pc = 0x109a40u;
}
