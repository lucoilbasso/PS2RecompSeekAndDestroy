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

// Function: entry_001ac3a4
// Address: 0x1ac3a4 - 0x1ac440
void entry_001ac3a4_0x1ac3a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac3a4_0x1ac3a4");
#endif

    ctx->pc = 0x1ac3a4u;

    // 0x1ac3a4: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1ac3a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1ac3a8: 0x244299f0  addiu       $v0, $v0, -0x6610
    ctx->pc = 0x1ac3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941168));
    // 0x1ac3ac: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1ac3acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1ac3b0: 0x91250001  lbu         $a1, 0x1($t1)
    ctx->pc = 0x1ac3b0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x1ac3b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ac3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ac3b8: 0x24849a00  addiu       $a0, $a0, -0x6600
    ctx->pc = 0x1ac3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941184));
    // 0x1ac3bc: 0x90680000  lbu         $t0, 0x0($v1)
    ctx->pc = 0x1ac3bcu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ac3c0: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1ac3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1ac3c4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1ac3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1ac3c8: 0x3442ffcf  ori         $v0, $v0, 0xFFCF
    ctx->pc = 0x1ac3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65487);
    // 0x1ac3cc: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1ac3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1ac3d0: 0x91270002  lbu         $a3, 0x2($t1)
    ctx->pc = 0x1ac3d0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x1ac3d4: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x1ac3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x1ac3d8: 0x24849a10  addiu       $a0, $a0, -0x65F0
    ctx->pc = 0x1ac3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941200));
    // 0x1ac3dc: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x1ac3dcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1ac3e0: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x1ac3e0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ac3e4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1ac3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1ac3e8: 0x485025  or          $t2, $v0, $t0
    ctx->pc = 0x1ac3e8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x1ac3ec: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x1ac3ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1ac3f0: 0x3463ff3f  ori         $v1, $v1, 0xFF3F
    ctx->pc = 0x1ac3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65343);
    // 0x1ac3f4: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x1ac3f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x1ac3f8: 0x1431824  and         $v1, $t2, $v1
    ctx->pc = 0x1ac3f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x1ac3fc: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x1ac3fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1ac400: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1ac400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1ac404: 0x665025  or          $t2, $v1, $a2
    ctx->pc = 0x1ac404u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1ac408: 0x3442fff3  ori         $v0, $v0, 0xFFF3
    ctx->pc = 0x1ac408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65523);
    // 0x1ac40c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1ac40cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ac410: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x1ac410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x1ac414: 0x1160000a  beqz        $t3, . + 4 + (0xA << 2)
    ctx->pc = 0x1AC414u;
    {
        const bool branch_taken_0x1ac414 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC414u;
        // 0x1ac418: 0x445025  or          $t2, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac414) {
            ctx->pc = 0x1AC440u;
            return;
        }
    }
    ctx->pc = 0x1AC41Cu;
    // 0x1ac41c: 0x91230003  lbu         $v1, 0x3($t1)
    ctx->pc = 0x1ac41cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
    // 0x1ac420: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1ac420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1ac424: 0x354a0002  ori         $t2, $t2, 0x2
    ctx->pc = 0x1ac424u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)2);
    // 0x1ac428: 0x3442fcff  ori         $v0, $v0, 0xFCFF
    ctx->pc = 0x1ac428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64767);
    // 0x1ac42c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ac42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ac430: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x1ac430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x1ac434: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1ac434u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1ac438: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1AC438u;
    {
        const bool branch_taken_0x1ac438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC438u;
        // 0x1ac43c: 0x435025  or          $t2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac438) {
            ctx->pc = 0x1AC44Cu;
            return;
        }
    }
    ctx->pc = 0x1AC440u;
}
