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

// Function: $L26
// Address: 0x1d0930 - 0x1d096c
void ps2__L26_0x1d0930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L26_0x1d0930");
#endif

    ctx->pc = 0x1d0930u;

label_1d0930:
    // 0x1d0930: 0xdc860000  ld          $a2, 0x0($a0)
    ctx->pc = 0x1d0930u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d0934: 0xc9102f  dsubu       $v0, $a2, $t1
    ctx->pc = 0x1d0934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) - GPR_U64(ctx, 9));
    // 0x1d0938: 0x61827  nor         $v1, $zero, $a2
    ctx->pc = 0x1d0938u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
    // 0x1d093c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d093cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d0940: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x1d0940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x1d0944: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D0944u;
    {
        const bool branch_taken_0x1d0944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0944u;
        // 0x1d0948: 0xc71026  xor         $v0, $a2, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0944) {
            ctx->pc = 0x1D0978u;
            return;
        }
    }
    ctx->pc = 0x1D094Cu;
    // 0x1d094c: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x1d094cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1d0950: 0x49102f  dsubu       $v0, $v0, $t1
    ctx->pc = 0x1d0950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 9));
    // 0x1d0954: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d0954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d0958: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x1d0958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x1d095c: 0x5040fff4  beql        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x1D095Cu;
    {
        const bool branch_taken_0x1d095c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d095c) {
            ctx->pc = 0x1D0960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D095Cu;
            // 0x1d0960: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0930;
        }
    }
    ctx->pc = 0x1D0964u;
    // 0x1d0964: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D0964u;
    {
        const bool branch_taken_0x1d0964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0964u;
        // 0x1d0968: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0964) {
            ctx->pc = 0x1D097Cu;
            return;
        }
    }
    ctx->pc = 0x1D096Cu;
}
