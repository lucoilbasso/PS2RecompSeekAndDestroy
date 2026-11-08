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

// Function: entry_001abeb8
// Address: 0x1abeb8 - 0x1abf60
void entry_001abeb8_0x1abeb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001abeb8_0x1abeb8");
#endif

    ctx->pc = 0x1abeb8u;

    // 0x1abeb8: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x1abeb8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x1abebc: 0x111043  sra         $v0, $s1, 1
    ctx->pc = 0x1abebcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
    // 0x1abec0: 0x121843  sra         $v1, $s2, 1
    ctx->pc = 0x1abec0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 1));
    // 0x1abec4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1abec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1abec8: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x1abec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1abecc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1abeccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1abed0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1abed0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1abed4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1abed4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1abed8: 0x82102f  dsubu       $v0, $a0, $v0
    ctx->pc = 0x1abed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
    // 0x1abedc: 0x83202f  dsubu       $a0, $a0, $v1
    ctx->pc = 0x1abedcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
    // 0x1abee0: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x1abee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1abee4: 0x2646ffff  addiu       $a2, $s2, -0x1
    ctx->pc = 0x1abee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1abee8: 0x2625ffff  addiu       $a1, $s1, -0x1
    ctx->pc = 0x1abee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1abeec: 0x42138  dsll        $a0, $a0, 4
    ctx->pc = 0x1abeecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 4);
    // 0x1abef0: 0xde030040  ld          $v1, 0x40($s0)
    ctx->pc = 0x1abef0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1abef4: 0xde070050  ld          $a3, 0x50($s0)
    ctx->pc = 0x1abef4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1abef8: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x1abef8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1abefc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1abefcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1abf00: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x1abf00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x1abf04: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1abf04u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1abf08: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x1abf08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x1abf0c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1abf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1abf10: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x1abf10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x1abf14: 0xeb3825  or          $a3, $a3, $t3
    ctx->pc = 0x1abf14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 11));
    // 0x1abf18: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1abf18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1abf1c: 0x2408001a  addiu       $t0, $zero, 0x1A
    ctx->pc = 0x1abf1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1abf20: 0x24090046  addiu       $t1, $zero, 0x46
    ctx->pc = 0x1abf20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1abf24: 0x240a0045  addiu       $t2, $zero, 0x45
    ctx->pc = 0x1abf24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x1abf28: 0xfe020028  sd          $v0, 0x28($s0)
    ctx->pc = 0x1abf28u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 2));
    // 0x1abf2c: 0xfe040020  sd          $a0, 0x20($s0)
    ctx->pc = 0x1abf2cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 4));
    // 0x1abf30: 0x32820002  andi        $v0, $s4, 0x2
    ctx->pc = 0x1abf30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
    // 0x1abf34: 0xfe050038  sd          $a1, 0x38($s0)
    ctx->pc = 0x1abf34u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 5));
    // 0x1abf38: 0xfe060030  sd          $a2, 0x30($s0)
    ctx->pc = 0x1abf38u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 6));
    // 0x1abf3c: 0xfe080048  sd          $t0, 0x48($s0)
    ctx->pc = 0x1abf3cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 8));
    // 0x1abf40: 0xfe030040  sd          $v1, 0x40($s0)
    ctx->pc = 0x1abf40u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 3));
    // 0x1abf44: 0xfe090058  sd          $t1, 0x58($s0)
    ctx->pc = 0x1abf44u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 88), GPR_U64(ctx, 9));
    // 0x1abf48: 0xfe070050  sd          $a3, 0x50($s0)
    ctx->pc = 0x1abf48u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 7));
    // 0x1abf4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ABF4Cu;
    {
        const bool branch_taken_0x1abf4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABF4Cu;
        // 0x1abf50: 0xfe0a0068  sd          $t2, 0x68($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abf4c) {
            ctx->pc = 0x1ABF60u;
            return;
        }
    }
    ctx->pc = 0x1ABF54u;
    // 0x1abf54: 0xde020060  ld          $v0, 0x60($s0)
    ctx->pc = 0x1abf54u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1abf58: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1ABF58u;
    {
        const bool branch_taken_0x1abf58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABF58u;
        // 0x1abf5c: 0x4b1025  or          $v0, $v0, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abf58) {
            ctx->pc = 0x1ABF6Cu;
            return;
        }
    }
    ctx->pc = 0x1ABF60u;
}
