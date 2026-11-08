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

// Function: entry_00129104
// Address: 0x129104 - 0x129140
void entry_00129104_0x129104(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129104_0x129104");
#endif

    switch (ctx->pc) {
        case 0x129128u: goto label_129128;
        default: break;
    }

    ctx->pc = 0x129104u;

    // 0x129104: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x129104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129108: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x129108u;
    {
        const bool branch_taken_0x129108 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12910Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129108u;
        // 0x12910c: 0x8fa400bc  lw          $a0, 0xBC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129108) {
            ctx->pc = 0x129140u;
            return;
        }
    }
    ctx->pc = 0x129110u;
    // 0x129110: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x129110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x129114: 0x7fa900e0  sq          $t1, 0xE0($sp)
    ctx->pc = 0x129114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 9));
    // 0x129118: 0x7faa00f0  sq          $t2, 0xF0($sp)
    ctx->pc = 0x129118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 10));
    // 0x12911c: 0x7fae0100  sq          $t6, 0x100($sp)
    ctx->pc = 0x12911cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 14));
    // 0x129120: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x129120u;
    SET_GPR_U32(ctx, 31, 0x129128u);
    ctx->pc = 0x129124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129120u;
    // 0x129124: 0x7faf0110  sq          $t7, 0x110($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x129120u, 0x129128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129128u;
label_129128:
    // 0x129128: 0x7baf0110  lq          $t7, 0x110($sp)
    ctx->pc = 0x129128u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x12912c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x12912cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129130: 0x7bae0100  lq          $t6, 0x100($sp)
    ctx->pc = 0x129130u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x129134: 0x7baa00f0  lq          $t2, 0xF0($sp)
    ctx->pc = 0x129134u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x129138: 0x7ba900e0  lq          $t1, 0xE0($sp)
    ctx->pc = 0x129138u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x12913c: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x12913cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    ctx->pc = 0x129140u;
}
