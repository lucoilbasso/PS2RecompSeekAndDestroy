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

// Function: entry_001cc234
// Address: 0x1cc234 - 0x1cc260
void entry_001cc234_0x1cc234(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc234_0x1cc234");
#endif

    ctx->pc = 0x1cc234u;

label_1cc234:
    // 0x1cc234: 0x8e290008  lw          $t1, 0x8($s1)
    ctx->pc = 0x1cc234u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1cc238:
    // 0x1cc238: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1cc238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cc23c:
    // 0x1cc23c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cc23cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cc240:
    // 0x1cc240: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1cc240u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1cc244:
    // 0x1cc244: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x1cc244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_1cc248:
    // 0x1cc248: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1cc248u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1cc24c:
    // 0x1cc24c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1cc24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_1cc250:
    // 0x1cc250: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x1cc250u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1cc254:
    // 0x1cc254: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1cc254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1cc258:
    // 0x1cc258: 0x40f809  jalr        $v0
label_1cc25c:
    if (ctx->pc == 0x1CC25Cu) {
        ctx->pc = 0x1CC25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC258u;
        // 0x1cc25c: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC260u;
        goto label_fallthrough_0x1cc258;
    }
    ctx->pc = 0x1CC258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CC260u);
        ctx->pc = 0x1CC25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC258u;
        // 0x1cc25c: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC258u, 0x1CC260u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1cc258:
    ctx->pc = 0x1CC260u;
}
