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

// Function: entry_0013dc60
// Address: 0x13dc60 - 0x13dce0
void entry_0013dc60_0x13dc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013dc60_0x13dc60");
#endif

    switch (ctx->pc) {
        case 0x13dcd4u: goto label_13dcd4;
        default: break;
    }

    ctx->pc = 0x13dc60u;

    // 0x13dc60: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x13dc60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13dc64: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x13dc64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x13dc68: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x13dc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x13dc6c: 0x2471823  subu        $v1, $s2, $a3
    ctx->pc = 0x13dc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x13dc70: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x13dc70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x13dc74: 0x24640005  addiu       $a0, $v1, 0x5
    ctx->pc = 0x13dc74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x13dc78: 0x82202b  sltu        $a0, $a0, $v0
    ctx->pc = 0x13dc78u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13dc7c: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x13dc7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x13dc80: 0x10800059  beqz        $a0, . + 4 + (0x59 << 2)
    ctx->pc = 0x13DC80u;
    {
        const bool branch_taken_0x13dc80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DC80u;
        // 0x13dc84: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dc80) {
            ctx->pc = 0x13DDE8u;
            return;
        }
    }
    ctx->pc = 0x13DC88u;
    // 0x13dc88: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13dc88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dc8c: 0x3c051100  lui         $a1, 0x1100
    ctx->pc = 0x13dc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    // 0x13dc90: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x13dc90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x13dc94: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13dc94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13dc98: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x13dc98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x13dc9c: 0x3c065000  lui         $a2, 0x5000
    ctx->pc = 0x13dc9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20480 << 16));
    // 0x13dca0: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x13dca0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x13dca4: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x13dca4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x13dca8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x13dca8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dcac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x13dcacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13dcb0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x13dcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x13dcb4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x13dcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x13dcb8: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x13dcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x13dcbc: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x13dcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x13dcc0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x13dcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x13dcc4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x13dcc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x13dcc8: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x13dcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x13dccc: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x13DCCCu;
    SET_GPR_U32(ctx, 31, 0x13DCD4u);
    ctx->pc = 0x13DCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DCCCu;
    // 0x13dcd0: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x13DCCCu, 0x13DCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DCD4u;
label_13dcd4:
    // 0x13dcd4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x13dcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x13dcd8: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x13dcd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x13dcdc: 0x0  nop
    ctx->pc = 0x13dcdcu;
    // NOP
    ctx->pc = 0x13dce0u;
}
