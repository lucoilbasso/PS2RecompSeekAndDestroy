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

// Function: $L6
// Address: 0x1d08f0 - 0x1d0930
void ps2__L6_0x1d08f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L6_0x1d08f0");
#endif

    ctx->pc = 0x1d08f0u;

    // 0x1d08f0: 0xdc890000  ld          $t1, 0x0($a0)
    ctx->pc = 0x1d08f0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d08f4: 0x91827  nor         $v1, $zero, $t1
    ctx->pc = 0x1d08f4u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 9)));
    // 0x1d08f8: 0x126102f  dsubu       $v0, $t1, $a2
    ctx->pc = 0x1d08f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) - GPR_U64(ctx, 6));
    // 0x1d08fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d08fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d0900: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x1d0900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x1d0904: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D0904u;
    {
        const bool branch_taken_0x1d0904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0904) {
            ctx->pc = 0x1D0908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0904u;
            // 0x1d0908: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D097Cu;
            return;
        }
    }
    ctx->pc = 0x1D090Cu;
    // 0x1d090c: 0x1271026  xor         $v0, $t1, $a3
    ctx->pc = 0x1d090cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 7));
    // 0x1d0910: 0x46182f  dsubu       $v1, $v0, $a2
    ctx->pc = 0x1d0910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) - GPR_U64(ctx, 6));
    // 0x1d0914: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1d0914u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1d0918: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1d0918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d091c: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x1d091cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x1d0920: 0x54600016  bnel        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x1D0920u;
    {
        const bool branch_taken_0x1d0920 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0920) {
            ctx->pc = 0x1D0924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0920u;
            // 0x1d0924: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D097Cu;
            return;
        }
    }
    ctx->pc = 0x1D0928u;
    // 0x1d0928: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x1d0928u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d092c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1d092cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->pc = 0x1d0930u;
}
