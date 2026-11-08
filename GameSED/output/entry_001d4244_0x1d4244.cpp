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

// Function: entry_001d4244
// Address: 0x1d4244 - 0x1d4278
void entry_001d4244_0x1d4244(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4244_0x1d4244");
#endif

    ctx->pc = 0x1d4244u;

    // 0x1d4244: 0x1620000c  bnez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1D4244u;
    {
        const bool branch_taken_0x1d4244 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4244u;
        // 0x1d4248: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4244) {
            ctx->pc = 0x1D4278u;
            return;
        }
    }
    ctx->pc = 0x1D424Cu;
    // 0x1d424c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1d424cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1d4250: 0x3c05001d  lui         $a1, 0x1D
    ctx->pc = 0x1d4250u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)29 << 16));
    // 0x1d4254: 0x8c44e1b0  lw          $a0, -0x1E50($v0)
    ctx->pc = 0x1d4254u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x24E1B0u));
    // 0x1d4258: 0x24a54230  addiu       $a1, $a1, 0x4230
    ctx->pc = 0x1d4258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16944));
    // 0x1d425c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d425cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4260: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d4260u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d4264: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d4264u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d4268: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d4268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d426c: 0x807538c  j           func_1D4E30
    ctx->pc = 0x1D426Cu;
    ctx->pc = 0x1D4270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D426Cu;
    // 0x1d4270: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4E30u;
    _fwalk_0x1d4e30(rdram, ctx, runtime); return;
    ctx->pc = 0x1D4274u;
    // 0x1d4274: 0x0  nop
    ctx->pc = 0x1d4274u;
    // NOP
    ctx->pc = 0x1d4278u;
}
