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

// Function: entry_00115d60
// Address: 0x115d60 - 0x115db8
void entry_00115d60_0x115d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115d60_0x115d60");
#endif

    switch (ctx->pc) {
        case 0x115d80u: goto label_115d80;
        default: break;
    }

    ctx->pc = 0x115d60u;

label_115d60:
    // 0x115d60: 0x118600  sll         $s0, $s1, 24
    ctx->pc = 0x115d60u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 24));
    // 0x115d64: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x115d64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x115d68: 0x108603  sra         $s0, $s0, 24
    ctx->pc = 0x115d68u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 24));
    // 0x115d6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x115d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115d70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x115d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115d74: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x115d74u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x115d78: 0xc045360  jal         func_114D80
    ctx->pc = 0x115D78u;
    SET_GPR_U32(ctx, 31, 0x115D80u);
    ctx->pc = 0x115D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115D78u;
    // 0x115d7c: 0x108040  sll         $s0, $s0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x115D78u, 0x115D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115D80u;
label_115d80:
    // 0x115d80: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x115d80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x115d84: 0x2a22000c  slti        $v0, $s1, 0xC
    ctx->pc = 0x115d84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x115d88: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x115D88u;
    {
        const bool branch_taken_0x115d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115D88u;
        // 0x115d8c: 0xa6130ff0  sh          $s3, 0xFF0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4080), (uint16_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115d88) {
            ctx->pc = 0x115D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115d60;
        }
    }
    ctx->pc = 0x115D90u;
    // 0x115d90: 0x240224d0  addiu       $v0, $zero, 0x24D0
    ctx->pc = 0x115d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x115d94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x115d94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115d98: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x115d98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x115d9c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x115d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x115da0: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x115da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x115da4: 0x2421c540  addiu       $at, $at, -0x3AC0
    ctx->pc = 0x115da4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294952256));
    // 0x115da8: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x115da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x115dac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x115dacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115db0: 0x24441008  addiu       $a0, $v0, 0x1008
    ctx->pc = 0x115db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4104));
    // 0x115db4: 0x0  nop
    ctx->pc = 0x115db4u;
    // NOP
    ctx->pc = 0x115db8u;
}
