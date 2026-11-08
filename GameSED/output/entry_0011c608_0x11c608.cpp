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

// Function: entry_0011c608
// Address: 0x11c608 - 0x11c64c
void entry_0011c608_0x11c608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c608_0x11c608");
#endif

    ctx->pc = 0x11c608u;

label_11c608:
    // 0x11c608: 0xdc890000  ld          $t1, 0x0($a0)
    ctx->pc = 0x11c608u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11c60c: 0xdc8a0008  ld          $t2, 0x8($a0)
    ctx->pc = 0x11c60cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x11c610: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x11c610u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x11c614: 0xdc880018  ld          $t0, 0x18($a0)
    ctx->pc = 0x11c614u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x11c618: 0xfc490000  sd          $t1, 0x0($v0)
    ctx->pc = 0x11c618u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 9));
    // 0x11c61c: 0xfc4a0008  sd          $t2, 0x8($v0)
    ctx->pc = 0x11c61cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 10));
    // 0x11c620: 0xfc470010  sd          $a3, 0x10($v0)
    ctx->pc = 0x11c620u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 7));
    // 0x11c624: 0xfc480018  sd          $t0, 0x18($v0)
    ctx->pc = 0x11c624u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 8));
    // 0x11c628: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x11c628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x11c62c: 0x0  nop
    ctx->pc = 0x11c62cu;
    // NOP
    // 0x11c630: 0x0  nop
    ctx->pc = 0x11c630u;
    // NOP
    // 0x11c634: 0x1483fff4  bne         $a0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x11C634u;
    {
        const bool branch_taken_0x11c634 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x11C638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C634u;
        // 0x11c638: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c634) {
            ctx->pc = 0x11C608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c608;
        }
    }
    ctx->pc = 0x11C63Cu;
    // 0x11c63c: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x11c63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11c640: 0x24c34600  addiu       $v1, $a2, 0x4600
    ctx->pc = 0x11c640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 17920));
    // 0x11c644: 0x2442c180  addiu       $v0, $v0, -0x3E80
    ctx->pc = 0x11c644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951296));
    // 0x11c648: 0x24c449c0  addiu       $a0, $a2, 0x49C0
    ctx->pc = 0x11c648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 18880));
    ctx->pc = 0x11c64cu;
}
