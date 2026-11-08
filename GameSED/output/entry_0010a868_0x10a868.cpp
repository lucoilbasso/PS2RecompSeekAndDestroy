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

// Function: entry_0010a868
// Address: 0x10a868 - 0x10a8e0
void entry_0010a868_0x10a868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a868_0x10a868");
#endif

    ctx->pc = 0x10a868u;

    // 0x10a868: 0x24170010  addiu       $s7, $zero, 0x10
    ctx->pc = 0x10a868u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x10a86c: 0x17b83c  dsll32      $s7, $s7, 0
    ctx->pc = 0x10a86cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << (32 + 0));
    // 0x10a870: 0x36f70010  ori         $s7, $s7, 0x10
    ctx->pc = 0x10a870u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)16);
    // 0x10a874: 0x2442b000  addiu       $v0, $v0, -0x5000
    ctx->pc = 0x10a874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946816));
    // 0x10a878: 0x17183f  dsra32      $v1, $s7, 0
    ctx->pc = 0x10a878u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 23) >> (32 + 0));
    // 0x10a87c: 0xdc4c0038  ld          $t4, 0x38($v0)
    ctx->pc = 0x10a87cu;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x10a880: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x10a880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x10a884: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x10a884u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x10a888: 0xdc4a0000  ld          $t2, 0x0($v0)
    ctx->pc = 0x10a888u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10a88c: 0x17583c  dsll32      $t3, $s7, 0
    ctx->pc = 0x10a88cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 23) << (32 + 0));
    // 0x10a890: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x10a890u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x10a894: 0xdc490008  ld          $t1, 0x8($v0)
    ctx->pc = 0x10a894u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x10a898: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x10a898u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a89c: 0xdc440010  ld          $a0, 0x10($v0)
    ctx->pc = 0x10a89cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x10a8a0: 0xdc450018  ld          $a1, 0x18($v0)
    ctx->pc = 0x10a8a0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x10a8a4: 0xdc460020  ld          $a2, 0x20($v0)
    ctx->pc = 0x10a8a4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x10a8a8: 0xdc470028  ld          $a3, 0x28($v0)
    ctx->pc = 0x10a8a8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x10a8ac: 0xdc480030  ld          $t0, 0x30($v0)
    ctx->pc = 0x10a8acu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x10a8b0: 0xfe6a0000  sd          $t2, 0x0($s3)
    ctx->pc = 0x10a8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 10));
    // 0x10a8b4: 0xfe690008  sd          $t1, 0x8($s3)
    ctx->pc = 0x10a8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 9));
    // 0x10a8b8: 0xfe640010  sd          $a0, 0x10($s3)
    ctx->pc = 0x10a8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 16), GPR_U64(ctx, 4));
    // 0x10a8bc: 0xfe650018  sd          $a1, 0x18($s3)
    ctx->pc = 0x10a8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 5));
    // 0x10a8c0: 0xfe660020  sd          $a2, 0x20($s3)
    ctx->pc = 0x10a8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 32), GPR_U64(ctx, 6));
    // 0x10a8c4: 0xfe670028  sd          $a3, 0x28($s3)
    ctx->pc = 0x10a8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 40), GPR_U64(ctx, 7));
    // 0x10a8c8: 0xfe680030  sd          $t0, 0x30($s3)
    ctx->pc = 0x10a8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 48), GPR_U64(ctx, 8));
    // 0x10a8cc: 0xfe6c0038  sd          $t4, 0x38($s3)
    ctx->pc = 0x10a8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 56), GPR_U64(ctx, 12));
    // 0x10a8d0: 0xae6b0048  sw          $t3, 0x48($s3)
    ctx->pc = 0x10a8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 11));
    // 0x10a8d4: 0xae63004c  sw          $v1, 0x4C($s3)
    ctx->pc = 0x10a8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 3));
    // 0x10a8d8: 0xae600040  sw          $zero, 0x40($s3)
    ctx->pc = 0x10a8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 0));
    // 0x10a8dc: 0xae600044  sw          $zero, 0x44($s3)
    ctx->pc = 0x10a8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 0));
    ctx->pc = 0x10a8e0u;
}
