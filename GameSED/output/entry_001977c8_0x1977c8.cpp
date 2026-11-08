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

// Function: entry_001977c8
// Address: 0x1977c8 - 0x197840
void entry_001977c8_0x1977c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001977c8_0x1977c8");
#endif

    ctx->pc = 0x1977c8u;

    // 0x1977c8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1977c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1977cc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1977ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1977d0: 0x92260004  lbu         $a2, 0x4($s1)
    ctx->pc = 0x1977d0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1977d4: 0x624025  or          $t0, $v1, $v0
    ctx->pc = 0x1977d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1977d8: 0x38c20003  xori        $v0, $a2, 0x3
    ctx->pc = 0x1977d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)3);
    // 0x1977dc: 0x82bc2  srl         $a1, $t0, 15
    ctx->pc = 0x1977dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 15));
    // 0x1977e0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1977e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1977e4: 0x30a30007  andi        $v1, $a1, 0x7
    ctx->pc = 0x1977e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x1977e8: 0x2e23825  or          $a3, $s7, $v0
    ctx->pc = 0x1977e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
    // 0x1977ec: 0x38630005  xori        $v1, $v1, 0x5
    ctx->pc = 0x1977ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)5);
    // 0x1977f0: 0x34e20010  ori         $v0, $a3, 0x10
    ctx->pc = 0x1977f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16);
    // 0x1977f4: 0x43380a  movz        $a3, $v0, $v1
    ctx->pc = 0x1977f4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x1977f8: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x1977f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x1977fc: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1977FCu;
    {
        const bool branch_taken_0x1977fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x197800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1977FCu;
        // 0x197800: 0x2402fff8  addiu       $v0, $zero, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1977fc) {
            ctx->pc = 0x197864u;
            return;
        }
    }
    ctx->pc = 0x197804u;
    // 0x197804: 0x2404004d  addiu       $a0, $zero, 0x4D
    ctx->pc = 0x197804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x197808: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x197808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x19780c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19780cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x197810: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x197810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x197814: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x197814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x197818: 0x14c30009  bne         $a2, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x197818u;
    {
        const bool branch_taken_0x197818 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x19781Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197818u;
        // 0x19781c: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197818) {
            ctx->pc = 0x197840u;
            return;
        }
    }
    ctx->pc = 0x197820u;
    // 0x197820: 0x24030412  addiu       $v1, $zero, 0x412
    ctx->pc = 0x197820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x197824: 0xffa30048  sd          $v1, 0x48($sp)
    ctx->pc = 0x197824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 3));
    // 0x197828: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x197828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x19782c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x19782cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x197830: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x197830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x197834: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x197834u;
    {
        const bool branch_taken_0x197834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197834u;
        // 0x197838: 0x213fc  dsll32      $v0, $v0, 15 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197834) {
            ctx->pc = 0x197858u;
            return;
        }
    }
    ctx->pc = 0x19783Cu;
    // 0x19783c: 0x0  nop
    ctx->pc = 0x19783cu;
    // NOP
    ctx->pc = 0x197840u;
}
