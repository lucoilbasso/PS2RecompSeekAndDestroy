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

// Function: entry_001cf658
// Address: 0x1cf658 - 0x1cf6ac
void entry_001cf658_0x1cf658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf658_0x1cf658");
#endif

    ctx->pc = 0x1cf658u;

    // 0x1cf658: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1cf658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1cf65c: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x1cf65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x1cf660: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1cf660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1cf664: 0xdcc3e5c8  ld          $v1, -0x1A38($a2)
    ctx->pc = 0x1cf664u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 4294960584)));
    // 0x1cf668: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x1cf668u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1cf66c: 0xa3282d  daddu       $a1, $a1, $v1
    ctx->pc = 0x1cf66cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1cf670: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x1cf670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1cf674: 0xc29824  and         $s3, $a2, $v0
    ctx->pc = 0x1cf674u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1cf678: 0x64a50010  daddiu      $a1, $a1, 0x10
    ctx->pc = 0x1cf678u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)16);
    // 0x1cf67c: 0x5903c  dsll32      $s2, $a1, 0
    ctx->pc = 0x1cf67cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1cf680: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x1cf680u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x1cf684: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1cf684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1cf688: 0x10750008  beq         $v1, $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CF688u;
    {
        const bool branch_taken_0x1cf688 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x1CF68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF688u;
        // 0x1cf68c: 0x2938021  addu        $s0, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf688) {
            ctx->pc = 0x1CF6ACu;
            return;
        }
    }
    ctx->pc = 0x1CF690u;
    // 0x1cf690: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x1cf690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1cf694: 0x2403f000  addiu       $v1, $zero, -0x1000
    ctx->pc = 0x1cf694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x1cf698: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1cf698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1cf69c: 0x64420fff  daddiu      $v0, $v0, 0xFFF
    ctx->pc = 0x1cf69cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4095);
    // 0x1cf6a0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1cf6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1cf6a4: 0x2903c  dsll32      $s2, $v0, 0
    ctx->pc = 0x1cf6a4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1cf6a8: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x1cf6a8u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
    ctx->pc = 0x1cf6acu;
}
