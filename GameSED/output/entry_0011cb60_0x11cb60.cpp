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

// Function: entry_0011cb60
// Address: 0x11cb60 - 0x11cbb8
void entry_0011cb60_0x11cb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cb60_0x11cb60");
#endif

    ctx->pc = 0x11cb60u;

label_11cb60:
    // 0x11cb60: 0xdc670000  ld          $a3, 0x0($v1)
    ctx->pc = 0x11cb60u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11cb64: 0xdc680008  ld          $t0, 0x8($v1)
    ctx->pc = 0x11cb64u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x11cb68: 0xdc690010  ld          $t1, 0x10($v1)
    ctx->pc = 0x11cb68u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x11cb6c: 0xdc6a0018  ld          $t2, 0x18($v1)
    ctx->pc = 0x11cb6cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x11cb70: 0xfc470000  sd          $a3, 0x0($v0)
    ctx->pc = 0x11cb70u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 7));
    // 0x11cb74: 0xfc480008  sd          $t0, 0x8($v0)
    ctx->pc = 0x11cb74u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 8));
    // 0x11cb78: 0xfc490010  sd          $t1, 0x10($v0)
    ctx->pc = 0x11cb78u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 9));
    // 0x11cb7c: 0xfc4a0018  sd          $t2, 0x18($v0)
    ctx->pc = 0x11cb7cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 10));
    // 0x11cb80: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x11cb80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x11cb84: 0x0  nop
    ctx->pc = 0x11cb84u;
    // NOP
    // 0x11cb88: 0x0  nop
    ctx->pc = 0x11cb88u;
    // NOP
    // 0x11cb8c: 0x1466fff4  bne         $v1, $a2, . + 4 + (-0xC << 2)
    ctx->pc = 0x11CB8Cu;
    {
        const bool branch_taken_0x11cb8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x11CB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB8Cu;
        // 0x11cb90: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cb8c) {
            ctx->pc = 0x11CB60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11cb60;
        }
    }
    ctx->pc = 0x11CB94u;
    // 0x11cb94: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x11cb94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x11cb98: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x11cb98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x11cb9c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x11cb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11cba0: 0x2463c540  addiu       $v1, $v1, -0x3AC0
    ctx->pc = 0x11cba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952256));
    // 0x11cba4: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x11cba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x11cba8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x11cba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cbac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x11cbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11cbb0: 0x244572c0  addiu       $a1, $v0, 0x72C0
    ctx->pc = 0x11cbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 29376));
    // 0x11cbb4: 0x24424e00  addiu       $v0, $v0, 0x4E00
    ctx->pc = 0x11cbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19968));
    ctx->pc = 0x11cbb8u;
}
