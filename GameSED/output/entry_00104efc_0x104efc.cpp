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

// Function: entry_00104efc
// Address: 0x104efc - 0x104f48
void entry_00104efc_0x104efc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104efc_0x104efc");
#endif

    switch (ctx->pc) {
        case 0x104f3cu: goto label_104f3c;
        default: break;
    }

    ctx->pc = 0x104efcu;

    // 0x104efc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x104efcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104f00: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x104f00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x104f04: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x104f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x104f08: 0x24041605  addiu       $a0, $zero, 0x1605
    ctx->pc = 0x104f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5637));
    // 0x104f0c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x104f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x104f10: 0xac6200b8  sw          $v0, 0xB8($v1)
    ctx->pc = 0x104f10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x2400B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2400B8u, _value); } while (0);
    // 0x104f14: 0x8f919194  lw          $s1, -0x6E6C($gp)
    ctx->pc = 0x104f14u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939028)));
    // 0x104f18: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x104f18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x104f1c: 0x1444000a  bne         $v0, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x104F1Cu;
    {
        const bool branch_taken_0x104f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x104F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104F1Cu;
        // 0x104f20: 0xaf909194  sw          $s0, -0x6E6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939028), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104f1c) {
            ctx->pc = 0x104F48u;
            return;
        }
    }
    ctx->pc = 0x104F24u;
    // 0x104f24: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x104f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104f28: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x104f28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x104f2c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x104f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x104f30: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x104f30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x104f34: 0xc041228  jal         func_1048A0
    ctx->pc = 0x104F34u;
    SET_GPR_U32(ctx, 31, 0x104F3Cu);
    ctx->pc = 0x104F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104F34u;
    // 0x104f38: 0x8e080018  lw          $t0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1048A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1048A0u, 0x104F34u, 0x104F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104F3Cu;
label_104f3c:
    // 0x104f3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x104F3Cu;
    {
        const bool branch_taken_0x104f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104F3Cu;
        // 0x104f40: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104f3c) {
            ctx->pc = 0x104F60u;
            return;
        }
    }
    ctx->pc = 0x104F44u;
    // 0x104f44: 0x0  nop
    ctx->pc = 0x104f44u;
    // NOP
    ctx->pc = 0x104f48u;
}
