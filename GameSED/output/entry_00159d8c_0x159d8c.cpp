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

// Function: entry_00159d8c
// Address: 0x159d8c - 0x159db8
void entry_00159d8c_0x159d8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159d8c_0x159d8c");
#endif

    switch (ctx->pc) {
        case 0x159db4u: goto label_159db4;
        default: break;
    }

    ctx->pc = 0x159d8cu;

label_159d8c:
    // 0x159d8c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_159d90:
    if (ctx->pc == 0x159D90u) {
        ctx->pc = 0x159D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159D8Cu;
        // 0x159d90: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159D94u;
        goto label_159d94;
    }
    ctx->pc = 0x159D8Cu;
    {
        const bool branch_taken_0x159d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159D8Cu;
        // 0x159d90: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159d8c) {
            ctx->pc = 0x159DB8u;
            return;
        }
    }
    ctx->pc = 0x159D94u;
label_159d94:
    // 0x159d94: 0x8d42000c  lw          $v0, 0xC($t2)
    ctx->pc = 0x159d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
label_159d98:
    // 0x159d98: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x159d98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_159d9c:
    // 0x159d9c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x159d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_159da0:
    // 0x159da0: 0x8ce50120  lw          $a1, 0x120($a3)
    ctx->pc = 0x159da0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 288)));
label_159da4:
    // 0x159da4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x159da4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_159da8:
    // 0x159da8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x159da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_159dac:
    // 0x159dac: 0x60f809  jalr        $v1
label_159db0:
    if (ctx->pc == 0x159DB0u) {
        ctx->pc = 0x159DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159DACu;
        // 0x159db0: 0x1442021  addu        $a0, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159DB4u;
        goto label_159db4;
    }
    ctx->pc = 0x159DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x159DB4u);
        ctx->pc = 0x159DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159DACu;
        // 0x159db0: 0x1442021  addu        $a0, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159DACu, 0x159DB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x159DB4u;
label_159db4:
    // 0x159db4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x159db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x159db8u;
}
