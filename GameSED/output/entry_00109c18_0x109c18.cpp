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

// Function: entry_00109c18
// Address: 0x109c18 - 0x109c5c
void entry_00109c18_0x109c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109c18_0x109c18");
#endif

    switch (ctx->pc) {
        case 0x109c34u: goto label_109c34;
        default: break;
    }

    ctx->pc = 0x109c18u;

    // 0x109c18: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x109c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x109c1c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x109c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x109c20: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x109c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x109c24: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x109c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x109c28: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x109c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x109c2c: 0xc04110c  jal         func_104430
    ctx->pc = 0x109C2Cu;
    SET_GPR_U32(ctx, 31, 0x109C34u);
    ctx->pc = 0x109C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109C2Cu;
    // 0x109c30: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x109C2Cu, 0x109C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109C34u;
label_109c34:
    // 0x109c34: 0x8623000e  lh          $v1, 0xE($s1)
    ctx->pc = 0x109c34u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x109c38: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x109c38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109c3c: 0x96420158  lhu         $v0, 0x158($s2)
    ctx->pc = 0x109c3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x109c40: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x109c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x109c44: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x109C44u;
    {
        const bool branch_taken_0x109c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109C44u;
        // 0x109c48: 0x2c740001  sltiu       $s4, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x109c44) {
            ctx->pc = 0x109C5Cu;
            return;
        }
    }
    ctx->pc = 0x109C4Cu;
    // 0x109c4c: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x109c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
    // 0x109c50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x109c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109c54: 0xc063d68  jal         func_18F5A0
    ctx->pc = 0x109C54u;
    SET_GPR_U32(ctx, 31, 0x109C5Cu);
    ctx->pc = 0x109C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109C54u;
    // 0x109c58: 0x24a5b000  addiu       $a1, $a1, -0x5000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F5A0u, 0x109C54u, 0x109C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109C5Cu;
}
