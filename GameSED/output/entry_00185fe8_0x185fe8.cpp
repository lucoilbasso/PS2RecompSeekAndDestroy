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

// Function: entry_00185fe8
// Address: 0x185fe8 - 0x186018
void entry_00185fe8_0x185fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185fe8_0x185fe8");
#endif

    switch (ctx->pc) {
        case 0x186010u: goto label_186010;
        default: break;
    }

    ctx->pc = 0x185fe8u;

label_185fe8:
    // 0x185fe8: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x185fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
label_185fec:
    // 0x185fec: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_185ff0:
    if (ctx->pc == 0x185FF0u) {
        ctx->pc = 0x185FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185FECu;
        // 0x185ff0: 0x8cd0001c  lw          $s0, 0x1C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185FF4u;
        goto label_185ff4;
    }
    ctx->pc = 0x185FECu;
    {
        const bool branch_taken_0x185fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x185FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185FECu;
        // 0x185ff0: 0x8cd0001c  lw          $s0, 0x1C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185fec) {
            ctx->pc = 0x186018u;
            return;
        }
    }
    ctx->pc = 0x185FF4u;
label_185ff4:
    // 0x185ff4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x185ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_185ff8:
    // 0x185ff8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x185ff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_185ffc:
    // 0x185ffc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x185ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_186000:
    // 0x186000: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x186000u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_186004:
    // 0x186004: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x186004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_186008:
    // 0x186008: 0x60f809  jalr        $v1
label_18600c:
    if (ctx->pc == 0x18600Cu) {
        ctx->pc = 0x18600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186008u;
        // 0x18600c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186010u;
        goto label_186010;
    }
    ctx->pc = 0x186008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x186010u);
        ctx->pc = 0x18600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186008u;
        // 0x18600c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186008u, 0x186010u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x186010u;
label_186010:
    // 0x186010: 0x10000008  b           . + 4 + (0x8 << 2)
label_186014:
    if (ctx->pc == 0x186014u) {
        ctx->pc = 0x186014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186010u;
        // 0x186014: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186018u;
        goto label_fallthrough_0x186010;
    }
    ctx->pc = 0x186010u;
    {
        const bool branch_taken_0x186010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186010u;
        // 0x186014: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186010) {
            ctx->pc = 0x186034u;
            return;
        }
    }
label_fallthrough_0x186010:
    ctx->pc = 0x186018u;
}
