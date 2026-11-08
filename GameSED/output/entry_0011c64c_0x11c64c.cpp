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

// Function: entry_0011c64c
// Address: 0x11c64c - 0x11c6a4
void entry_0011c64c_0x11c64c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c64c_0x11c64c");
#endif

    ctx->pc = 0x11c64cu;

label_11c64c:
    // 0x11c64c: 0xdc690000  ld          $t1, 0x0($v1)
    ctx->pc = 0x11c64cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11c650: 0xdc6a0008  ld          $t2, 0x8($v1)
    ctx->pc = 0x11c650u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x11c654: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x11c654u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x11c658: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x11c658u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x11c65c: 0xfc490000  sd          $t1, 0x0($v0)
    ctx->pc = 0x11c65cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 9));
    // 0x11c660: 0xfc4a0008  sd          $t2, 0x8($v0)
    ctx->pc = 0x11c660u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 10));
    // 0x11c664: 0xfc470010  sd          $a3, 0x10($v0)
    ctx->pc = 0x11c664u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 7));
    // 0x11c668: 0xfc480018  sd          $t0, 0x18($v0)
    ctx->pc = 0x11c668u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 8));
    // 0x11c66c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x11c66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x11c670: 0x0  nop
    ctx->pc = 0x11c670u;
    // NOP
    // 0x11c674: 0x0  nop
    ctx->pc = 0x11c674u;
    // NOP
    // 0x11c678: 0x1464fff4  bne         $v1, $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x11C678u;
    {
        const bool branch_taken_0x11c678 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x11C67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C678u;
        // 0x11c67c: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c678) {
            ctx->pc = 0x11C64Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c64c;
        }
    }
    ctx->pc = 0x11C680u;
    // 0x11c680: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x11c680u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x11c684: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x11c684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x11c688: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x11c688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11c68c: 0x2464c540  addiu       $a0, $v1, -0x3AC0
    ctx->pc = 0x11c68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952256));
    // 0x11c690: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x11c690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x11c694: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x11c694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c698: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x11c698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x11c69c: 0x244672c0  addiu       $a2, $v0, 0x72C0
    ctx->pc = 0x11c69cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 29376));
    // 0x11c6a0: 0x24424e00  addiu       $v0, $v0, 0x4E00
    ctx->pc = 0x11c6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19968));
    ctx->pc = 0x11c6a4u;
}
