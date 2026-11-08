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

// Function: entry_001730c0
// Address: 0x1730c0 - 0x173130
void entry_001730c0_0x1730c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001730c0_0x1730c0");
#endif

    ctx->pc = 0x1730c0u;

    // 0x1730c0: 0x1aa00205  blez        $s5, . + 4 + (0x205 << 2)
    ctx->pc = 0x1730C0u;
    {
        const bool branch_taken_0x1730c0 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x1730C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1730C0u;
        // 0x1730c4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1730c0) {
            ctx->pc = 0x1738D8u;
            return;
        }
    }
    ctx->pc = 0x1730C8u;
    // 0x1730c8: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1730c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1730cc: 0x3c027200  lui         $v0, 0x7200
    ctx->pc = 0x1730ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29184 << 16));
    // 0x1730d0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1730d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1730d4: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x1730d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    // 0x1730d8: 0x752018  mult        $a0, $v1, $s5
    ctx->pc = 0x1730d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1730dc: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x1730dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x1730e0: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x1730e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1730e4: 0x2477d5c0  addiu       $s7, $v1, -0x2A40
    ctx->pc = 0x1730e4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956480));
    // 0x1730e8: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x1730e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
    // 0x1730ec: 0x241e0030  addiu       $fp, $zero, 0x30
    ctx->pc = 0x1730ecu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1730f0: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x1730f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1730f4: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x1730f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1730f8: 0x8fa3008c  lw          $v1, 0x8C($sp)
    ctx->pc = 0x1730f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x1730fc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1730fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x173100: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x173100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x173104: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x173104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x173108: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x173108u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x17310c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x17310cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x173110: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x173110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x173114: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x173114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x173118: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x173118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x17311c: 0xafa600b4  sw          $a2, 0xB4($sp)
    ctx->pc = 0x17311cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 6));
    // 0x173120: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x173120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
    // 0x173124: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x173124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
    // 0x173128: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x173128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x17312c: 0x0  nop
    ctx->pc = 0x17312cu;
    // NOP
    ctx->pc = 0x173130u;
}
