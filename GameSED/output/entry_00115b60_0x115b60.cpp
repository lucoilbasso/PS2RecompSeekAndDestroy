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

// Function: entry_00115b60
// Address: 0x115b60 - 0x115bb8
void entry_00115b60_0x115b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115b60_0x115b60");
#endif

    switch (ctx->pc) {
        case 0x115b80u: goto label_115b80;
        default: break;
    }

    ctx->pc = 0x115b60u;

label_115b60:
    // 0x115b60: 0x118600  sll         $s0, $s1, 24
    ctx->pc = 0x115b60u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 24));
    // 0x115b64: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x115b64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x115b68: 0x108603  sra         $s0, $s0, 24
    ctx->pc = 0x115b68u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 24));
    // 0x115b6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x115b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115b70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x115b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115b74: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x115b74u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x115b78: 0xc045360  jal         func_114D80
    ctx->pc = 0x115B78u;
    SET_GPR_U32(ctx, 31, 0x115B80u);
    ctx->pc = 0x115B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115B78u;
    // 0x115b7c: 0x108040  sll         $s0, $s0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x115B78u, 0x115B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115B80u;
label_115b80:
    // 0x115b80: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x115b80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x115b84: 0x2a22000c  slti        $v0, $s1, 0xC
    ctx->pc = 0x115b84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x115b88: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x115B88u;
    {
        const bool branch_taken_0x115b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115B88u;
        // 0x115b8c: 0xa6140ff0  sh          $s4, 0xFF0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4080), (uint16_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115b88) {
            ctx->pc = 0x115B60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115b60;
        }
    }
    ctx->pc = 0x115B90u;
    // 0x115b90: 0x240224d0  addiu       $v0, $zero, 0x24D0
    ctx->pc = 0x115b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x115b94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x115b94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115b98: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x115b98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x115b9c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x115b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x115ba0: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x115ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x115ba4: 0x2421c540  addiu       $at, $at, -0x3AC0
    ctx->pc = 0x115ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294952256));
    // 0x115ba8: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x115ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x115bac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x115bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115bb0: 0x24441008  addiu       $a0, $v0, 0x1008
    ctx->pc = 0x115bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4104));
    // 0x115bb4: 0x0  nop
    ctx->pc = 0x115bb4u;
    // NOP
    ctx->pc = 0x115bb8u;
}
