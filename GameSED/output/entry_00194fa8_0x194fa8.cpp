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

// Function: entry_00194fa8
// Address: 0x194fa8 - 0x195020
void entry_00194fa8_0x194fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194fa8_0x194fa8");
#endif

    ctx->pc = 0x194fa8u;

    // 0x194fa8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x194fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x194fac: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x194facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x194fb0: 0x92260004  lbu         $a2, 0x4($s1)
    ctx->pc = 0x194fb0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x194fb4: 0x624025  or          $t0, $v1, $v0
    ctx->pc = 0x194fb4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x194fb8: 0x38c20003  xori        $v0, $a2, 0x3
    ctx->pc = 0x194fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)3);
    // 0x194fbc: 0x82bc2  srl         $a1, $t0, 15
    ctx->pc = 0x194fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 15));
    // 0x194fc0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x194fc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x194fc4: 0x30a30007  andi        $v1, $a1, 0x7
    ctx->pc = 0x194fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x194fc8: 0x2e23825  or          $a3, $s7, $v0
    ctx->pc = 0x194fc8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
    // 0x194fcc: 0x38630005  xori        $v1, $v1, 0x5
    ctx->pc = 0x194fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)5);
    // 0x194fd0: 0x34e20010  ori         $v0, $a3, 0x10
    ctx->pc = 0x194fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16);
    // 0x194fd4: 0x43380a  movz        $a3, $v0, $v1
    ctx->pc = 0x194fd4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x194fd8: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x194fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x194fdc: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x194FDCu;
    {
        const bool branch_taken_0x194fdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x194FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194FDCu;
        // 0x194fe0: 0x2402fff8  addiu       $v0, $zero, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194fdc) {
            ctx->pc = 0x195044u;
            return;
        }
    }
    ctx->pc = 0x194FE4u;
    // 0x194fe4: 0x2404004d  addiu       $a0, $zero, 0x4D
    ctx->pc = 0x194fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x194fe8: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x194fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x194fec: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x194fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x194ff0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x194ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x194ff4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x194ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x194ff8: 0x14c30009  bne         $a2, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x194FF8u;
    {
        const bool branch_taken_0x194ff8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x194FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194FF8u;
        // 0x194ffc: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194ff8) {
            ctx->pc = 0x195020u;
            return;
        }
    }
    ctx->pc = 0x195000u;
    // 0x195000: 0x24030412  addiu       $v1, $zero, 0x412
    ctx->pc = 0x195000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x195004: 0xffa30048  sd          $v1, 0x48($sp)
    ctx->pc = 0x195004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 3));
    // 0x195008: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x195008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x19500c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x19500cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x195010: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x195010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x195014: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x195014u;
    {
        const bool branch_taken_0x195014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195014u;
        // 0x195018: 0x213fc  dsll32      $v0, $v0, 15 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195014) {
            ctx->pc = 0x195038u;
            return;
        }
    }
    ctx->pc = 0x19501Cu;
    // 0x19501c: 0x0  nop
    ctx->pc = 0x19501cu;
    // NOP
    ctx->pc = 0x195020u;
}
