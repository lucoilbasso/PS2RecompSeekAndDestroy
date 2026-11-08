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

// Function: entry_0017f400
// Address: 0x17f400 - 0x17f4b4
void entry_0017f400_0x17f400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f400_0x17f400");
#endif

    ctx->pc = 0x17f400u;

    // 0x17f400: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17f400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17f404: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17f404u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f408: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17f408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17f40c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x17f40cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f410: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x17f410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17f414: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x17f414u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17f418: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x17f418u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x17f41c: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x17f41cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17f420: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x17f420u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x17f424: 0xa6220014  sh          $v0, 0x14($s1)
    ctx->pc = 0x17f424u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x17f428: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x17f428u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17f42c: 0xae270000  sw          $a3, 0x0($s1)
    ctx->pc = 0x17f42cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 7));
    // 0x17f430: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x17f430u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x17f434: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x17f434u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x17f438: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x17f438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17f43c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x17f43cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x17f440: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x17f440u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x17f444: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x17f444u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17f448: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x17f448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17f44c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x17f44cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x17f450: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x17f450u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x17f454: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x17f454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x17f458: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x17f458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17f45c: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x17f45cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x17f460: 0x96060000  lhu         $a2, 0x0($s0)
    ctx->pc = 0x17f460u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17f464: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x17f464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x17f468: 0xae300018  sw          $s0, 0x18($s1)
    ctx->pc = 0x17f468u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 16));
    // 0x17f46c: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x17f46cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x17f470: 0xae300020  sw          $s0, 0x20($s1)
    ctx->pc = 0x17f470u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 16));
    // 0x17f474: 0x2078021  addu        $s0, $s0, $a3
    ctx->pc = 0x17f474u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x17f478: 0xae300024  sw          $s0, 0x24($s1)
    ctx->pc = 0x17f478u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 16));
    // 0x17f47c: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x17f47cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x17f480: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x17f480u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x17f484: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17f484u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17f488: 0xae300028  sw          $s0, 0x28($s1)
    ctx->pc = 0x17f488u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 16));
    // 0x17f48c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x17f48cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x17f490: 0xae30002c  sw          $s0, 0x2C($s1)
    ctx->pc = 0x17f490u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 16));
    // 0x17f494: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x17f494u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x17f498: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x17f498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17f49c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x17f49cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x17f4a0: 0xa6260016  sh          $a2, 0x16($s1)
    ctx->pc = 0x17f4a0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 22), (uint16_t)GPR_U32(ctx, 6));
    // 0x17f4a4: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x17f4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x17f4a8: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x17F4A8u;
    {
        const bool branch_taken_0x17f4a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F4A8u;
        // 0x17f4ac: 0x22880  sll         $a1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f4a8) {
            ctx->pc = 0x17F4B4u;
            return;
        }
    }
    ctx->pc = 0x17F4B0u;
    // 0x17f4b0: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x17f4b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x17f4b4u;
}
