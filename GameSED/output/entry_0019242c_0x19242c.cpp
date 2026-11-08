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

// Function: entry_0019242c
// Address: 0x19242c - 0x1924a8
void entry_0019242c_0x19242c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019242c_0x19242c");
#endif

    ctx->pc = 0x19242cu;

    // 0x19242c: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x19242cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x192430: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x192430u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x192434: 0x52ff8  dsll        $a1, $a1, 31
    ctx->pc = 0x192434u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 31);
    // 0x192438: 0x8e230288  lw          $v1, 0x288($s1)
    ctx->pc = 0x192438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 648)));
    // 0x19243c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x19243cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192440: 0xdfa40050  ld          $a0, 0x50($sp)
    ctx->pc = 0x192440u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x192444: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x192444u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192448: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x192448u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19244c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x19244cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x192450: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x192450u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x192454: 0x852825  or          $a1, $a0, $a1
    ctx->pc = 0x192454u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x192458: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x192458u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19245c: 0x262901d0  addiu       $t1, $s1, 0x1D0
    ctx->pc = 0x19245cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 464));
    // 0x192460: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x192460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x192464: 0x262801c0  addiu       $t0, $s1, 0x1C0
    ctx->pc = 0x192464u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
    // 0x192468: 0x8e2301f4  lw          $v1, 0x1F4($s1)
    ctx->pc = 0x192468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 500)));
    // 0x19246c: 0x24470170  addiu       $a3, $v0, 0x170
    ctx->pc = 0x19246cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x192470: 0x8e22028c  lw          $v0, 0x28C($s1)
    ctx->pc = 0x192470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 652)));
    // 0x192474: 0x8e240288  lw          $a0, 0x288($s1)
    ctx->pc = 0x192474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 648)));
    // 0x192478: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x192478u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19247c: 0xae2301f4  sw          $v1, 0x1F4($s1)
    ctx->pc = 0x19247cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 500), GPR_U32(ctx, 3));
    // 0x192480: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x192480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x192484: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x192484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x192488: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x192488u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x19248c: 0x8e230204  lw          $v1, 0x204($s1)
    ctx->pc = 0x19248cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x192490: 0x8e22028c  lw          $v0, 0x28C($s1)
    ctx->pc = 0x192490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 652)));
    // 0x192494: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x192494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x192498: 0xae230204  sw          $v1, 0x204($s1)
    ctx->pc = 0x192498u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 516), GPR_U32(ctx, 3));
    // 0x19249c: 0xfcc50000  sd          $a1, 0x0($a2)
    ctx->pc = 0x19249cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
    // 0x1924a0: 0xdfa30038  ld          $v1, 0x38($sp)
    ctx->pc = 0x1924a0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1924a4: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x1924a4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    ctx->pc = 0x1924a8u;
}
