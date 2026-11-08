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

// Function: entry_0017de60
// Address: 0x17de60 - 0x17de88
void entry_0017de60_0x17de60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017de60_0x17de60");
#endif

    ctx->pc = 0x17de60u;

    // 0x17de60: 0x15e00009  bnez        $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x17DE60u;
    {
        const bool branch_taken_0x17de60 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DE60u;
        // 0x17de64: 0x3c020018  lui         $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17de60) {
            ctx->pc = 0x17DE88u;
            return;
        }
    }
    ctx->pc = 0x17DE68u;
    // 0x17de68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17de68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17de6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17de6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17de70: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17de70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17de74: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17de74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17de78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17de78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17de7c: 0x805f72a  j           func_17DCA8
    ctx->pc = 0x17DE7Cu;
    ctx->pc = 0x17DE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DE7Cu;
    // 0x17de80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17DCA8u;
    WImageTransPackageProc__FP7WcImagei_0x17dca8(rdram, ctx, runtime); return;
    ctx->pc = 0x17DE84u;
    // 0x17de84: 0x0  nop
    ctx->pc = 0x17de84u;
    // NOP
    ctx->pc = 0x17de88u;
}
