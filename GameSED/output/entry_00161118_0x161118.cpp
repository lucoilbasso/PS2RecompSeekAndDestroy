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

// Function: entry_00161118
// Address: 0x161118 - 0x161158
void entry_00161118_0x161118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161118_0x161118");
#endif

    ctx->pc = 0x161118u;

label_161118:
    // 0x161118: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x161118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
label_16111c:
    // 0x16111c: 0x838821  addu        $s1, $a0, $v1
    ctx->pc = 0x16111cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_161120:
    // 0x161120: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x161120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_161124:
    // 0x161124: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x161124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_161128:
    // 0x161128: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x161128u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_16112c:
    // 0x16112c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x16112cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_161130:
    // 0x161130: 0x2c83000d  sltiu       $v1, $a0, 0xD
    ctx->pc = 0x161130u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
label_161134:
    // 0x161134: 0x106000c4  beqz        $v1, . + 4 + (0xC4 << 2)
label_161138:
    if (ctx->pc == 0x161138u) {
        ctx->pc = 0x161138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161134u;
        // 0x161138: 0xac520c04  sw          $s2, 0xC04($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3076), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16113Cu;
        goto label_16113c;
    }
    ctx->pc = 0x161134u;
    {
        const bool branch_taken_0x161134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x161138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161134u;
        // 0x161138: 0xac520c04  sw          $s2, 0xC04($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3076), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161134) {
            ctx->pc = 0x161448u;
            return;
        }
    }
    ctx->pc = 0x16113Cu;
label_16113c:
    // 0x16113c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x16113cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_161140:
    // 0x161140: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x161140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_161144:
    // 0x161144: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x161144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_161148:
    // 0x161148: 0x8c636ec0  lw          $v1, 0x6EC0($v1)
    ctx->pc = 0x161148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28352)));
label_16114c:
    // 0x16114c: 0x600008  jr          $v1
label_161150:
    if (ctx->pc == 0x161150u) {
        ctx->pc = 0x161154u;
        goto label_161154;
    }
    ctx->pc = 0x16114Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16114Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x161154u;
label_161154:
    // 0x161154: 0x0  nop
    ctx->pc = 0x161154u;
    // NOP
    ctx->pc = 0x161158u;
}
