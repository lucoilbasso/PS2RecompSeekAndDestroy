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

// Function: entry_00196950
// Address: 0x196950 - 0x196970
void entry_00196950_0x196950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196950_0x196950");
#endif

    ctx->pc = 0x196950u;

    // 0x196950: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x196950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x196954: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x196954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x196958: 0x14400083  bnez        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x196958u;
    {
        const bool branch_taken_0x196958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196958u;
        // 0x19695c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196958) {
            ctx->pc = 0x196B68u;
            return;
        }
    }
    ctx->pc = 0x196960u;
    // 0x196960: 0x26870110  addiu       $a3, $s4, 0x110
    ctx->pc = 0x196960u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 272));
    // 0x196964: 0x12e00002  beqz        $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x196964u;
    {
        const bool branch_taken_0x196964 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x196968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196964u;
        // 0x196968: 0xc6800190  lwc1        $f0, 0x190($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x196964) {
            ctx->pc = 0x196970u;
            return;
        }
    }
    ctx->pc = 0x19696Cu;
    // 0x19696c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x19696cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    ctx->pc = 0x196970u;
}
